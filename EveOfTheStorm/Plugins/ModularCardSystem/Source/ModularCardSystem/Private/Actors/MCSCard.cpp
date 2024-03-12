// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/MCSCard.h"


// Sets default values
AMCSCard::AMCSCard()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CardData = FCardData();
}

void AMCSCard::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	ReceiveRenderCard();
}

// Called when the game starts or when spawned
void AMCSCard::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMCSCard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMCSCard::Init(const FCardData& InCardData)
{
	CardData = InCardData;

	ReceiveRenderCard();
}

