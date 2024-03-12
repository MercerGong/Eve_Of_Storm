// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Player/ESPlayerCardPlayComponent.h"

#include "Core/Game/ESResourceSystem.h"
#include "Core/Player/ESPlayerState.h"
#include "Types/Card.h"


// Sets default values for this component's properties
UESPlayerCardPlayComponent::UESPlayerCardPlayComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

bool UESPlayerCardPlayComponent::CanPlayCard(FCardData CardData)
{
	// if (bIsPlayingCard) return false;
	
	ECardType type = static_cast<ECardType>(CardData.Type);
	auto act = Actions.Find(type);
	if (act == nullptr) return false;

	// Check if comsume
	APlayerController* PC = GetOwner<APlayerController>();
	AESPlayerState* PS = PC->GetPlayerState<AESPlayerState>();
	UESResourceSystem* RS = PS->GetResourceSystem();

	for (auto& attr : CardData.Attributes)
	{
		if (attr.ResourceId > 2 || attr.ModifierOp != ECardModOp::Additive || attr.EffectValue > 0) continue;
		if (!RS->HasEnoughResource(static_cast<EResourceType>(attr.ResourceId), attr.EffectValue * -1.0f))
		{
			return false;
		}
	}

	// check card
	return (*act)->CanPlayCard(CardData);
}

void UESPlayerCardPlayComponent::StartPlayCard(FCardData CardData)
{
	if (bIsPlayingCard)
	{
		CurrentAction->CancelPlayCard();
	}
	
	CurrentCard = CardData;
	
	ECardType type = static_cast<ECardType>(CardData.Type);
	auto act = Actions.Find(type);
	if (act == nullptr) return;

	if ((*act)->CanPlayCard(CardData))
	{
		CurrentAction = (*act);
		CurrentAction->StartPlayCard(CardData);
		bIsPlayingCard = true;
	}
}

bool UESPlayerCardPlayComponent::PlayCard()
{
	if (!CanTrigger()) return false;
	
	bool Result =  CurrentAction->PlayCard();

	// Apply Modifier
	APlayerController* PC = GetOwner<APlayerController>();
	AESPlayerState* PS = PC->GetPlayerState<AESPlayerState>();
	UESResourceSystem* RS = PS->GetResourceSystem();

	for (auto& attr : CurrentCard.Attributes)
	{
		if (attr.ResourceId > 2) continue;
		FResourceModifier Modifier;
		Modifier.Amount = attr.EffectValue;
		Modifier.ModifierOp = attr.ModifierOp;
		Modifier.Type = static_cast<EResourceType>(attr.ResourceId);
		RS->ApplyModifier(Modifier);
	}

	Clear();
	return Result;
}

void UESPlayerCardPlayComponent::CancelPlayCard()
{
	if (!CanTrigger()) return;
	
	CurrentAction->CancelPlayCard();
	Clear();
}

void UESPlayerCardPlayComponent::OnMouseTrigger(FVector Position)
{
	if (!CanTrigger()) return;
	
	CurrentAction->OnMouseTrigger(Position);
}

void UESPlayerCardPlayComponent::OnRotate()
{
	if (!CanTrigger()) return;
	
	CurrentAction->OnRotate();
}

bool UESPlayerCardPlayComponent::IsPlayingCard()
{
	return bIsPlayingCard;
}

void UESPlayerCardPlayComponent::Clear()
{
	bIsPlayingCard = false;
	CurrentAction = nullptr;
	CurrentCard = FCardData();
}


// Called when the game starts
void UESPlayerCardPlayComponent::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	APlayerController* PC = GetOwner<APlayerController>();

	for (auto& Tuple : ActionClass)
	{
		UESCardAction* Act = NewObject<UESCardAction>(this, Tuple.Value);
		Act->Init(World, PC);
		Actions.Emplace(Tuple.Key, Act);
	}
}

bool UESPlayerCardPlayComponent::CanTrigger() const
{
	if (!bIsPlayingCard) return false;
	
	if (!CurrentAction)
	{
		UE_LOG(LogTemp, Warning, TEXT("Action is empty"))
		return false;
	}

	return true;
}
