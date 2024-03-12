// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESGameHelper.generated.h"

enum class EResourceType : uint8;

/**
 * 
 */
UCLASS()
class EVEOFTHESTORM_API UESGameHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="ES|Resource")
	static float GetResource(APlayerController* Controller, EResourceType Type);
	
	UFUNCTION(BlueprintCallable, Category="ES|Resource")
	static void SetResource(APlayerController* Controller, EResourceType Type, float Amount);
	
	UFUNCTION(BlueprintCallable, Category="ES|Resource")
	static bool HasResource(APlayerController* Controller, EResourceType Type, float Amount);
	
	UFUNCTION(BlueprintCallable, Category="ES|Resource")
	static float ApplyResourceModifier(APlayerController* Controller, FResourceModifier Modifier);
};
