// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Definition/ESCardEffect.h"

bool UESCardEffect::CanApplyEffect(AESDefaultGameMode* InGameMode, APlayerController* InPlayerController)
{
	bool Result;
	K2_CanApplyEffect(InGameMode, InPlayerController, Result);
	return Result;
}

void UESCardEffect::OnEffect(AESDefaultGameMode* InGameMode, APlayerController* InPlayerController)
{
	K2_OnEffect(InGameMode, InPlayerController);
}
