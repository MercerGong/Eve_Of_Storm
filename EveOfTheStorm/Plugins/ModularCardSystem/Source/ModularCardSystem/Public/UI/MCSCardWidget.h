// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Types/Card.h"
#include "MCSCardWidget.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class MODULARCARDSYSTEM_API UMCSCardWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Card")
	void Init(const FCardData& InCardData);

	UFUNCTION(BlueprintImplementableEvent, Category = "Card", DisplayName="OnInit")
	void K2_Init(const FCardData& InCardData);

protected:
	UPROPERTY(BlueprintReadWrite, Category = "Card", meta=(ExposeOnSpawn=true))
	FCardData CardData;
};
