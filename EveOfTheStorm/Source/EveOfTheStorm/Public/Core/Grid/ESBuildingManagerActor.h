// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESBuildingSystem.h"
#include "GameFramework/Actor.h"
#include "ESBuildingManagerActor.generated.h"

enum class EGridDirection : uint8;

UCLASS()
class EVEOFTHESTORM_API AESBuildingManagerActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AESBuildingManagerActor();

	UFUNCTION(BlueprintCallable)
	void Init(UESBuildingSystem* InSystem, TSubclassOf<AESBuildingActor> InActorClass );

	UFUNCTION(BlueprintCallable)
	void OnBuildingPlaced(int X, int Y, FBuildingData InBuildingData);

	UFUNCTION(BlueprintCallable)
	void OnBuildingRemoved(int Index);

	// PREVIEW MESH
	
	UFUNCTION(BlueprintCallable)
	void SetPreviewActor(FBuildingData InBuildingData, EGridDirection Direction);

	UFUNCTION(BlueprintCallable)
	void UpdatePreviewActor(int X, int Y, EGridDirection Direction);

	UFUNCTION(BlueprintCallable)
	void UpdatePreviewActorByWorldLocation(const FVector Location);

	UFUNCTION(BlueprintCallable)
	void HidePreviewActor();
	
	UFUNCTION(BlueprintCallable)
	bool ConfirmPlacement();
	
	UFUNCTION(BlueprintCallable, Category="ES|Building")
	FTransform GetBuildDesireTransform(FIntPoint Pos, FBuildingData& BuildingInfo);

	UFUNCTION(BlueprintCallable, Category="ES|Building")
	FVector SetGetGroundOffset();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly)
	FTransform LocationOrigin;
	
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	USceneComponent* RootSceneComponent;

	UPROPERTY(BlueprintReadWrite)
	UESBuildingSystem* BuildingSystem;

	UPROPERTY(BlueprintReadWrite)
	TSubclassOf<AESBuildingActor> BuildingActorClass;
	
	UPROPERTY(BlueprintReadWrite)
	AESBuildingActor* BuildingPreviewActor;
	
	UPROPERTY(BlueprintReadWrite, Transient)
	TArray<AESBuildingActor*> BuildingActors;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	UInstancedStaticMeshComponent* TilePreviewMesh;
	
	UPROPERTY(BlueprintReadWrite)
	FBuildingData PreviewBuildingData;

	UPROPERTY(BlueprintReadWrite)
	FIntPoint PreviewPos;

	UPROPERTY(BlueprintReadWrite)
	EGridDirection PreviewDirection;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FName MaterialIsErrorParamName = "IsError";
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	int GridSize = 100;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FVector TileScale = FVector(1.0f, 1.0f, 1.0f);

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float OffsetZ = 100;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FVector OffsetBuilding = FVector();

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float GridOffset = 0;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	UStaticMesh* TileMesh;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	UMaterial* TileMaterial;

	UPROPERTY(BlueprintReadOnly, Transient)
	int ImageIndex = 0;
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FTransform GetTileTransform(int X, int Y);
};
