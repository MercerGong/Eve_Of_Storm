// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Grid/ESGridActor.h"
#include "Core/Grid/ESBuildingActor.h"
#include "Core/Grid/ESGridSystem.h"
#include "GameFramework/GameModeBase.h"
#include "ESDefaultGameMode.generated.h"

class AESBuildingManagerActor;
class AESBuildingActor;
class UESGridSystem;
class UESBuildingSystem;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameTurnTriggerEvent, int, CurrentTurn);

USTRUCT(BlueprintType)
struct FDefaultBuilding
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FDataTableRowHandle Data;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FIntPoint Pos;
};

UCLASS()
class EVEOFTHESTORM_API AESDefaultGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AESDefaultGameMode();

	UPROPERTY(BlueprintReadOnly, Transient, Category = "ES|Grid System")
	UESGridSystem* GridSystem;

	UPROPERTY(BlueprintReadOnly, Transient, Category = "ES|Grid System")
	AESGridActor* GridActor;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "ES|Grid System")
	TSubclassOf<AESGridActor> GridActorClass;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "ES|Grid System")
	TArray<FGridTile> DefaultGridTiles;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "ES|Grid System")
	TArray<FDefaultBuilding> DefaultBuildings;
	
	UPROPERTY(BlueprintReadOnly, Category="ES|Grid System")
	UESBuildingSystem* BuildingSystem;
	
	UPROPERTY(BlueprintReadOnly, Category="ES|Grid System")
	AESBuildingManagerActor* BuildingActorManager;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "ES|Grid System")
	TSubclassOf<AESBuildingActor> BuildingActorClass;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "ES|Grid System")
	TSubclassOf<AESBuildingManagerActor> BuildingActorManagerClass;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "ES|Grid System")
	int MaxMonth = 18;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "ES|Grid System")
	int MaxTurnTime = 600;

	UPROPERTY(BlueprintReadOnly)
	int CurrentTime = 0;

	UPROPERTY(BlueprintReadOnly)
	int CurrentMonth = 1;

	UPROPERTY(BlueprintAssignable, Category="ES|Grid System")
	FGameTurnTriggerEvent GameTurnEvent;
	
	UFUNCTION(BlueprintCallable)
	void SkipTurn();

	UFUNCTION(BlueprintCallable)
	void SetPauseTime(bool InPaused);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void TimeToggleEvent();

	FTimerHandle TurnTimerHandle;

	UPROPERTY(BlueprintReadOnly)
	bool bIsPaused = false;
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
