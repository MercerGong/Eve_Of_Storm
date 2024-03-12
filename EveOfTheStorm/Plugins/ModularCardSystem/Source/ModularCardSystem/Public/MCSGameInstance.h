// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MCSGameInstance.generated.h"

enum class ECardRarity : uint8;
/**
 * 
 */
UCLASS(BlueprintType)
class MODULARCARDSYSTEM_API UMCSGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	virtual void Init() override;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Cards")
	TSubclassOf<class UMCSCardWidget> CardWidget;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Cards")
	TSubclassOf<class AMCSCard> CardActor;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Cards")
	TArray<class UCardPackAsset*> CardPacks;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Cards")
	TMap<FName, class UDataTable*> VisualPacks;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Cards")
	TMap<ECardRarity, float> CardRarityWeights;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Cards")
	TMap<uint8, float> CardTypeWeights;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Cards")
	bool bEnableCardLock = false;
};
