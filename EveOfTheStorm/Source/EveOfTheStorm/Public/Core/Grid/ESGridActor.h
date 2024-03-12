// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESGridSystem.h"
#include "ESGridType.h"
#include "Components/BoxComponent.h"
#include "Core/Types/GroundType.h"
#include "Core/Grid/FastNoiseLite.h"
#include "Core/Grid/ESGridType.h"
#include "GameFramework/Actor.h"
#include "ESGridActor.generated.h"

USTRUCT()
struct FBlockIndex
{
	GENERATED_BODY()

	UPROPERTY()
	FIntPoint Point;

	UPROPERTY()
	EGroundType Type;

	// Hash function required for TMap
	friend uint32 GetTypeHash(const FBlockIndex& BlockIndex)
	{
		return HashCombine(GetTypeHash(BlockIndex.Point), GetTypeHash(static_cast<uint8>(BlockIndex.Type)));
	}

	bool operator==(const FBlockIndex& Other) const
	{
		return Point == Other.Point && Type == Other.Type;
	}
};

USTRUCT(BlueprintType)
struct FBlockMaterial
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TArray<UMaterialInterface*> Materials;
};

UCLASS(Blueprintable)
class EVEOFTHESTORM_API AESGridActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AESGridActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	UBoxComponent* GroundPlane;

	// UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	// UInstancedStaticMeshComponent* GridMeshes;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	USceneComponent* GridScene;

	//storge the instance static mesh of certain ground 
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	TMap<EGroundType, UInstancedStaticMeshComponent*> GridMeshes;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	UInstancedStaticMeshComponent* BackrockMeshes;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	UInstancedStaticMeshComponent* TilePreviewMesh;

	UPROPERTY(BlueprintReadOnly, Transient)
	class UESGridSystem* GridSystem;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	int GridSize = 100;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FVector TileScale = FVector(1.0f, 1.0f, 1.0f);

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FVector BackrockScale = FVector(1.0f, 1.0f, 1.0f);
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float GridOffset = 0;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TMap<EGroundType, FBlockMaterial> GroundMaterials;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TMap<EGroundType, UTexture2D*> PreviewGroundMaterials;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	UMaterialInterface* PreviewMaterials;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FName MaterialIsErrorParamName = "IsError";

	void OnTilePlaced(int X, int Y, EGroundType Type);

	void OnTileRemoved(int X, int Y, EGroundType Type);

	void OnTileUpdate(int X, int Y, EGroundType OldType, EGroundType NewType);

	// PREVIEW MESH
	
	UFUNCTION(BlueprintCallable)
	void SetPreviewMesh(const FGridTile Tile, EGridDirection Direction);

	UFUNCTION(BlueprintCallable)
	void UpdatePreviewMesh(int X, int Y);

	UFUNCTION(BlueprintCallable)
	void UpdatePreviewMeshByWorldLocation(const FVector Location);
	
	UFUNCTION(BlueprintCallable)
	void HidePreviewMesh();
	
	UFUNCTION(BlueprintCallable)
	bool ConfirmPlacement();

	UFUNCTION(BlueprintCallable)
	FVector GetCenterLocation();

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	UStaticMesh* TileMesh;

	UPROPERTY(BlueprintReadOnly, Transient)
	UMaterialInstanceDynamic* PreviewMaterial;

	UFUNCTION(BlueprintImplementableEvent)
	void OnTileSpawned(EGroundType GroundType, int Index);

	UFUNCTION(BlueprintImplementableEvent)
	void OnTileDestroyed(EGroundType GroundType, int X, int Y);

	UFUNCTION(BlueprintCallable)
	FTransform GetTileTransform(int X, int Y);
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(BlueprintReadOnly)
	FIntPoint CurrentTilePreviewLocation;
	
	UPROPERTY(BlueprintReadOnly)
	EGridDirection CurrentDirection = EGridDirection::North;

	UPROPERTY(BlueprintReadOnly)
	FGridTile CurrentTile;


	
	// The following line is the extentsion for 3D tile map, each tile will contain smaller elements called "cells"
	
	TArray<int> Cells;
	//the size of the tile,
	int CellSizeSize =5;
	// the noise for the 3D tilemap
	FastNoiseLite* Noise;
	FastNoiseLite* NoiseForArea;
	
	
	//generate the mesh of the 3D tile,input a position for placing the cell
	void Create3DTileMesh(EGroundType Type,FVector Position);

	//generate the Height Map of the 3D tile
	FVector2D Generate2DHeightMap(FVector2D NoiceLocation,const FVector Position);

	//GenerateCell
	void CreateCells(FVector Position,EGroundType Type);
	
	//GenerateCellGround
	void CreateCellGround(FVector Position);

	// Frequency Of the cells
	float Frequency=0.3;
	
	//return the block index for the new tile cell
	int GetBlockIndex(int X, int Y, int Z) const;

	//Storing the noiseindex

	float x1;
	float y1;
	
	float GenerateRandomFloat(float min, float max);

	
private:
	
	// UPROPERTY()
	// TArray<FIntPoint> MeshIndex;

	//give id to the mesh of the ground for updating the terrian
	TMap<EGroundType, TArray<FIntPoint>> MeshIndex;
};
