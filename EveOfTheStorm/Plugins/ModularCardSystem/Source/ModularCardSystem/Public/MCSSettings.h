// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "MCSSettings.generated.h"

/**
 * 
 */
UCLASS(config = Game, defaultconfig, notplaceable, meta = (DisplayName = "Modular Cards"))
class MODULARCARDSYSTEM_API UMCSSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(Config, EditAnywhere, Category = "Cards")
	TSubclassOf<class AMCSCard> CardActor;
	
	UPROPERTY(Config, EditAnywhere, Category = "Cards")
	TArray<TSoftObjectPtr<class UCardPackAsset>> CardPacks;
};
