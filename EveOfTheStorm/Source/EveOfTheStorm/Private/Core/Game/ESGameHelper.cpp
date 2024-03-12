// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Game/ESGameHelper.h"

#include "Core/Game/ESResourceSystem.h"
#include "Core/Player/ESPlayerState.h"

float UESGameHelper::GetResource(APlayerController* Controller, EResourceType Type)
{
	AESPlayerState* PS = Controller->GetPlayerState<AESPlayerState>();
	if (PS)
	{
		return PS->GetResourceSystem()->GetResourceValue(Type);
	}
	return 0;
}

void UESGameHelper::SetResource(APlayerController* Controller, EResourceType Type, float Amount)
{
	AESPlayerState* PS = Controller->GetPlayerState<AESPlayerState>();
	if (PS)
	{
		PS->GetResourceSystem()->SetResourceValue(Type, Amount);
	}
}

bool UESGameHelper::HasResource(APlayerController* Controller, EResourceType Type, float Amount)
{
	AESPlayerState* PS = Controller->GetPlayerState<AESPlayerState>();
	if (PS)
	{
		return PS->GetResourceSystem()->HasEnoughResource(Type, Amount);
	}
	return false;
}

float UESGameHelper::ApplyResourceModifier(APlayerController* Controller, FResourceModifier Modifier)
{
	AESPlayerState* PS = Controller->GetPlayerState<AESPlayerState>();
	if (PS)
	{
		return PS->GetResourceSystem()->ApplyModifier(Modifier);
	}
	return 0;
}
