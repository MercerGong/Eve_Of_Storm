// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Game/ESDefaultGameMode.h"
#include "UObject/Object.h"
#include "ESCardEffect.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, DefaultToInstanced, EditInlineNew, Abstract)
class EVEOFTHESTORM_API UESCardEffect : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	bool CanApplyEffect(AESDefaultGameMode* InGameMode, APlayerController* InPlayerController);

	UFUNCTION(BlueprintImplementableEvent, DisplayName="CanApplyEffect")
	void K2_CanApplyEffect(AESDefaultGameMode* GameMode, APlayerController* PlayerController, bool& CanApply);
	
	UFUNCTION(BlueprintCallable)
	void OnEffect(AESDefaultGameMode* InGameMode, APlayerController* InPlayerController);

	UFUNCTION(BlueprintImplementableEvent, DisplayName="OnEffect")
	void K2_OnEffect(AESDefaultGameMode* GameMode, APlayerController* PlayerController);

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FText ErrorMessage = FText::FromString(TEXT("Error"));
};
