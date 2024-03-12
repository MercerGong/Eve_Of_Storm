// Fill out your copyright notice in the Description page of Project Settings.


#include "EveOfTheStorm/Public/Core/ESCharacterBase.h"

#include "Core/Player/ESPlayerState.h"

AESCharacterBase::AESCharacterBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bAlwaysRelevant = true;
}

void AESCharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

// Called when the game starts or when spawned
void AESCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AESCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AESCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}


