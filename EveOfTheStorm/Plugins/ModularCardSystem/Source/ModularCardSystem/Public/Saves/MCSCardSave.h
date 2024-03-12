// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MCSCardSave.generated.h"

/**
 * 
 */
UCLASS()
class MODULARCARDSYSTEM_API UMCSCardSave : public USaveGame
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, Category = "Card Save")
	TArray<FName> UnlockedCardNames;
};
