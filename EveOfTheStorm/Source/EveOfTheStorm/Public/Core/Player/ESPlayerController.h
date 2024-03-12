// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ESPlayerController.generated.h"

class UESPlayerCardPlayComponent;

UCLASS()
class EVEOFTHESTORM_API AESPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AESPlayerController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnPossess(APawn* InPawn) override;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	UESPlayerCardPlayComponent* CardPlayComponent;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
