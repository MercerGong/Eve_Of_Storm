// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESCharacterBase.generated.h"

UCLASS()
class EVEOFTHESTORM_API AESCharacterBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AESCharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void PossessedBy(AController* NewController) override;

protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
