// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESCardFragment_Policy.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class EVEOFTHESTORM_API UESCardFragment_Policy : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	virtual bool CheckRequirement(APlayerController* PC);

	UFUNCTION(BlueprintImplementableEvent)
	void K2_CheckRequirement(APlayerController* PC, bool& Result);
};
