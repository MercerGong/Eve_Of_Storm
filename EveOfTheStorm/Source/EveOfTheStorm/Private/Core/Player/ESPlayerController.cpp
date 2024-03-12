// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Player/ESPlayerController.h"

#include "Core/Player/ESPlayerCardPlayComponent.h"
#include "Core/Player/ESPlayerState.h"


// Sets default values
AESPlayerController::AESPlayerController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CardPlayComponent = CreateDefaultSubobject<UESPlayerCardPlayComponent>(TEXT("CardPlay"));
}

// Called when the game starts or when spawned
void AESPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
}

void AESPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	
}

// Called every frame
void AESPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

