// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESCardEffect.h"
#include "ESCardFragment_Building.h"
#include "UObject/Object.h"
#include "ESCardFragment_CardEffects.generated.h"

/**
 * 
 */
UCLASS()
class EVEOFTHESTORM_API UESCardFragment_CardEffects : public UCardFragment
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced)
	TArray<TObjectPtr<UESCardEffect>> CardPlayEffect;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced)
	TArray<TObjectPtr<UESCardEffect>> CardDroppedEffect;
};
