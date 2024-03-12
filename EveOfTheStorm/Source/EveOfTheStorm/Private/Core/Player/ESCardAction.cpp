// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Player/ESCardAction.h"

#include "Core/Game/ESDefaultGameMode.h"
#include "Types/Card.h"

UESCardAction::UESCardAction(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{}

void UESCardAction::Init(UWorld* World, APlayerController* PlayerController)
{
	WorldPrivate = World;
	
	K2_Init(PlayerController);
}

bool UESCardAction::CanPlayCard(FCardData CardData)
{
	bool Result = true;
	K2_CanPlayCard(CardData, Result);
	return Result;
}

void UESCardAction::StartPlayCard(FCardData CardData)
{
	CurrentCard = CardData;
	K2_StartPlayCard(CurrentCard);
}

bool UESCardAction::PlayCard()
{
	bool Result;
	K2_PlayCard(Result);
	return Result;
}

void UESCardAction::CancelPlayCard()
{
	K2_CancelPlayCard();
}

void UESCardAction::OnMouseTrigger(FVector Position)
{
	K2_MouseTrigger(Position);
}

void UESCardAction::OnRotate()
{
	K2_Rotate();
}

AESDefaultGameMode* UESCardAction::GetESGameMode()
{
	if (WorldPrivate)
	{
		return WorldPrivate->GetAuthGameMode<AESDefaultGameMode>();
	}
	return nullptr;
}

UWorld* UESCardAction::GetWorld_Uncached() const
{
	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		auto Outer = GetOuter();
	
		if (Outer && Outer->IsA(UActorComponent::StaticClass()))
		{
			return Outer->GetWorld();
		}
	}
	
	return nullptr;
}
