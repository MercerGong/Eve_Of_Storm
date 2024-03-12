// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Game/ESDefaultGameMode.h"

#include "Core/Grid/ESBuildingManagerActor.h"
#include "Core/Grid/ESBuildingSystem.h"
#include "Core/Grid/ESGridActor.h"
#include "Core/Grid/ESGridSystem.h"
#include "EveOfTheStorm/EveOfTheStorm.h"
#include "GameFramework/PlayerStart.h"


// Sets default values
AESDefaultGameMode::AESDefaultGameMode()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AESDefaultGameMode::SkipTurn()
{
	CurrentTime = 0;
	CurrentMonth++;
	GameTurnEvent.Broadcast(CurrentMonth);
}

void AESDefaultGameMode::SetPauseTime(bool InPaused)
{
	bIsPaused = InPaused;
}

// Called when the game starts or when spawned
void AESDefaultGameMode::BeginPlay()
{
	GridSystem = NewObject<UESGridSystem>(this);

	if (!GridSystem)
	{
		UE_LOG(LogEveOfTheStorm, Error, TEXT("Grid system is null"));
		return;
	}

	GridSystem->Initialize();

	// Spawn the grid actor
	if (GridActorClass)
	{
		GridActor = GetWorld()->SpawnActor<AESGridActor>(GridActorClass);
	}

	// Place initial tiles
	GridSystem->PlaceInitialTile(DefaultGridTiles, EGridDirection::North);
	
	BuildingSystem = NewObject<UESBuildingSystem>(this);
	BuildingSystem->Init(GridSystem);

	BuildingActorManager = GetWorld()->SpawnActor<AESBuildingManagerActor>(BuildingActorManagerClass);
	BuildingActorManager->Init(BuildingSystem, BuildingActorClass);

	TArray<FBuildingInitData> Datas;
	for (auto& D : DefaultBuildings)
	{
		auto RowData = D.Data.GetRow<FBuildingData>(TEXT("SpawningBuilding"));
		if (RowData)
		{
			FBuildingInitData NewData;
			NewData.Pos = D.Pos;
			NewData.Data = *RowData;
			Datas.Add(NewData);
		}
	}
	
	BuildingSystem->PlaceInitialBuilding(Datas);
	
	GetWorldTimerManager().SetTimer(TurnTimerHandle, this, &AESDefaultGameMode::TimeToggleEvent, 1.0f, true, 2.0f);
	
	Super::BeginPlay();
}

void AESDefaultGameMode::TimeToggleEvent()
{
	if (bIsPaused) return;
	
	CurrentTime++;
	if (CurrentTime > MaxTurnTime)
	{
		CurrentTime = 0;
		CurrentMonth++;
		GameTurnEvent.Broadcast(CurrentMonth);
	}
}

// Called every frame
void AESDefaultGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

