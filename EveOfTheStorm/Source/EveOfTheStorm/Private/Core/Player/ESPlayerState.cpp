// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Player/ESPlayerState.h"

#include "Core/Game/ESResourceSystem.h"


// Sets default values
AESPlayerState::AESPlayerState()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// NetUpdateFrequency = 100.0f
}

// Called when the game starts or when spawned
void AESPlayerState::BeginPlay()
{
	Super::BeginPlay();

	ResourceSystem = NewObject<UESResourceSystem>(this);

	ResourceSystem->Init(FoodDefinition);
}

// Called every frame
void AESPlayerState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AESPlayerState::OnTurn()
{
	CurrentDrawCost += TurnDrawCost;
	CurrentConsumeFood += TurnConsumeFood;
}

void AESPlayerState::OnDraw()
{
	CurrentDrawBuffTempo = 0.f;
}

float AESPlayerState::GetCurrentDrawCost() const
{
	return CurrentDrawCost * (1.0f + CurrentDrawBuffTempo - CurrentDrawBuff);
}

// void AESPlayerState::FoodChanged(const FOnAttributeChangeData& Data)
// {
// 	OnFoodChange.Broadcast(Data.NewValue, Data.OldValue);
// }
