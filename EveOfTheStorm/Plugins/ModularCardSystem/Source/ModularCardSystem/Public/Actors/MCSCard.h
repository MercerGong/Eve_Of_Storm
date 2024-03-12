// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Types/Card.h"
#include "MCSCard.generated.h"

UCLASS(Blueprintable, BlueprintType)
class MODULARCARDSYSTEM_API AMCSCard : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMCSCard();

	virtual void OnConstruction(const FTransform& Transform) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Card")
	void Init(const FCardData& InCardData);

	UFUNCTION(BlueprintImplementableEvent, Category = "Card|Event", meta=(DisplayName = "RenderCard"))
	void ReceiveRenderCard();

protected:
	UPROPERTY(BlueprintReadWrite, Category = "Card")
	FCardData CardData;
};
