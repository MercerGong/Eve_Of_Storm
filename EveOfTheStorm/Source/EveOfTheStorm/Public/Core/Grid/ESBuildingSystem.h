// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESGridType.h"
#include "Core/Types/GroundType.h"
#include "Core/Types/ResourceType.h"
#include "Engine/DataTable.h"
#include "GameFramework/Actor.h"
#include "ESBuildingSystem.generated.h"

class AESBuildingActor;
class UESGridSystem;

USTRUCT(BlueprintType)
struct FBuildRewardPeriod
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	int32 Period = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	EResourceType ResourceType = EResourceType::Food;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	float ResourceAmount = 0.0f;
};

USTRUCT(BlueprintType)
struct FBuildingData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data", meta=(MultiLine))
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	TArray<UTexture2D*> Images;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	TArray<UTexture2D*> Drops;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	EGroundType RequireGroundType = EGroundType::None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	FTransform BuildingTransform = FTransform(
		FRotator(0, 135.f, 60.f),
		FVector(0), FVector(5.f));

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	TArray<FIntPoint> Shape;

	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	// TArray<FBuildPeriod> Periods;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	TArray<FBuildRewardPeriod> Rewards;
};

USTRUCT(BlueprintType)
struct FBuildingInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	FBuildingData Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	FIntPoint Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	int32 StartPeriod;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	bool Destroyed = false;

	bool Tick(int Tick);
};

USTRUCT(BlueprintType)
struct FBuildingInitData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FBuildingData Data;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FIntPoint Pos;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBuildingTriggerEvent, const FBuildingData&, BuildinData, int32, EventCount);

UCLASS()
class EVEOFTHESTORM_API UESBuildingSystem : public UObject
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	UESBuildingSystem();
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	int32 GridSizeX = 256;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	int32 GridSizeY = 256;

	UFUNCTION(BlueprintCallable, Category="ES|Building")
	void Init(UESGridSystem* InGridSystem);

	UFUNCTION(BlueprintCallable)
	void PlaceInitialBuilding(TArray<FBuildingInitData> Data);
	
	UFUNCTION(BlueprintCallable, Category="ES|Building")
	void SetCurrentTick(int InTick);

	UFUNCTION(BlueprintCallable, Category="ES|Building")
	bool PlaceBuilding(FIntPoint Position, FBuildingData InBuildingData, EGridDirection Direction);

	// bool PlaceBuilding(FIntPoint Position, FBuildingData InBuildingData);

	UFUNCTION(BlueprintCallable, Category="ES|Building")
	bool DropBuilding(int index);
	
	UFUNCTION(BlueprintCallable, Category="ES|Building")
	bool DropBuildingByPosition(FIntPoint Pos);
	
	UFUNCTION(BlueprintCallable, Category="ES|Building")
	bool GetBuildingByIndex(int index, FBuildingInfo& BuildingInfo);
	
	UFUNCTION(BlueprintCallable, Category="ES|Building")
	int GetBuildingByPosition(FIntPoint Pos, FBuildingInfo& BuildingInfo);

	UFUNCTION(BlueprintCallable, Category="ES|Building")
	bool HasBuilding(FIntPoint Pos) const;

	UFUNCTION(BlueprintCallable, Category="ES|Building")
	bool CanPlaceBuilding(FIntPoint Pos, FBuildingData InBuildingData, EGridDirection Direction) const;

	UFUNCTION(BlueprintCallable, Category="ES|Building")
	void TickBuilding();

	UFUNCTION(BlueprintCallable, Category="ES|Building")
	float GetEstimateCost();
	
	DECLARE_EVENT_ThreeParams(UESBuildingSystem, FOnBuildingPlacedEvent, int, int, FBuildingData)
	FOnBuildingPlacedEvent& OnTilePlaced() {return OnBuildingPlacedEvent;}

	DECLARE_EVENT_OneParam(UESBuildingSystem, FOnBuildingRemovedEvent, int)
	FOnBuildingRemovedEvent& OnTileRemoved() {return OnBuildingRemovedEvent;}
	
	UPROPERTY(BlueprintAssignable, Category="ES|Building")
	FOnBuildingTriggerEvent OnBuildingTriggerEvent;
	
protected: 
	UPROPERTY()
	UESGridSystem* GridSystem = nullptr;
	
	TArray<TArray<int32>> Grid;
	
	UPROPERTY(BlueprintReadOnly)
	TArray<FBuildingInfo> BuildingData;

	UPROPERTY(BlueprintReadOnly)
	int CurrentTick = 0;
	
private:
	FOnBuildingPlacedEvent OnBuildingPlacedEvent;
	
	FOnBuildingRemovedEvent OnBuildingRemovedEvent;
};
