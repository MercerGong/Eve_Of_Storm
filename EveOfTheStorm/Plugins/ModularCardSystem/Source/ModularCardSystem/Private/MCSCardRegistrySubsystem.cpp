// Fill out your copyright notice in the Description page of Project Settings.


#include "MCSCardRegistrySubsystem.h"

#include "MCSGameInstance.h"
#include "MCSSettings.h"
#include "Actors/MCSCard.h"
#include "Types/CardPack.h"
#include "UI/MCSCardWidget.h"

void UMCSCardRegistrySubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UMCSGameInstance* GI = Cast<UMCSGameInstance>(GetGameInstance());
	if (GI)
	{
		for (auto& Pack : GI->CardPacks)
		{
			// UCardPackAsset* Pack = PackClass.GetDefaultObject();
			UE_LOG(LogTemp, Warning, TEXT("Registering %s"), *Pack->Name.ToString());
			RegisterCardPack(Pack);
		}

		for (auto Visual : GI->VisualPacks)
		{
			RegisterTheme(Visual.Key, Visual.Value);
		}

		if (GI->CardActor)
		{
			CardActor = GI->CardActor;
		}

		Rarity = GI->CardRarityWeights;
		Type = GI->CardTypeWeights;
	}
	
	// const UMCSSettings* Settings = GetDefault<UMCSSettings>();
	// if ( Settings )
	// {
	// 	for (auto& Pack : Settings->CardPacks)
	// 	{
	// 		RegisterCardPack(Pack.Get());
	// 	}
	//
	// 	if (Settings->CardActor)
	// 	{
	// 		CardActor = Settings->CardActor;
	// 	}
	// }
}

void UMCSCardRegistrySubsystem::RegisterTheme(FName Theme, UDataTable* CardTheme)
{
	if (!IsValid(CardTheme)) return;

	VisualMap.Add(Theme, CardTheme);
}

void UMCSCardRegistrySubsystem::RegisterCardPack(UCardPackAsset* CardPack)
{
	if (!IsValid(CardPack)) return;
	
	// CardPacks.Add(CardPack);
	if (CardPacks.Contains(CardPack->Name))
	{
		return;
	}

	CardPacks.AddUnique(CardPack->Name);

	// TODO: register cards
	// Get all the rows from the DataTable
	if (!IsValid(CardPack->CardTable)) return;
	
	TArray<FName> RowNames = CardPack->CardTable->GetRowNames();

	// Iterate through each row
	for (const FName& RowName : RowNames)
	{
		// Get the row data using the row name
		FCardData* RowData = CardPack->CardTable->FindRow<FCardData>(RowName, TEXT("Register Card"));

		if (RowData)
		{
			CardMap.Emplace(RowName, *RowData);
		}
	}
}

FCardData UMCSCardRegistrySubsystem::GetCardData(FName CardName) const
{
	if (const FCardData* Card = CardMap.Find(CardName))
	{
		// UE_LOG(LogTemp, Warning, TEXT("Cards: %s -> %s"), *CardName.ToString(), *Card->Name.ToString());
		return *Card;
	}

	return FCardData();
}

void UMCSCardRegistrySubsystem::FilterCards(const FCardFilterParameters& Filter, TArray<FName>& OutCards) const
{
	for (const auto& CardTuple : CardMap)
	{
		if ((Filter.Rarity.IsEmpty() || Filter.Rarity.Contains(CardTuple.Value.Rarity)) &&
			(Filter.Type.IsEmpty() || Filter.Type.Contains(CardTuple.Value.Type)))
		{
			OutCards.Add(CardTuple.Key);
		}
	}
}

FName UMCSCardRegistrySubsystem::DrawRandomCard() const
{
	float Rand = FMath::RandRange(0, 100) / 100.0f;
	FCardFilterParameters Filters;
	for (auto R : Rarity)
	{
		UE_LOG(LogTemp, Warning, TEXT("Filtering Rarity %d: %f > %f"), (uint8)R.Key, R.Value, Rand)
		if (Rand <= R.Value)
		{
			Filters.Rarity.Add(R.Key);
			break;
		}
	}
	Rand = FMath::RandRange(0, 100) / 100.0f;
	for (auto R : Type)
	{
		UE_LOG(LogTemp, Warning, TEXT("Filtering Type %d: %f > %f"), (uint8)R.Key, R.Value, Rand)
		if (Rand <= R.Value)
		{
			Filters.Type.Add(R.Key);
			break;
		}
	}
	return GetRandomCard(Filters);
}

FName UMCSCardRegistrySubsystem::GetRandomCard(const FCardFilterParameters& Filter) const
{
	TArray<FName> Cards;
	FilterCards(Filter, Cards);
	if (Cards.Num() > 0)
	{
		return Cards[FMath::RandRange(0, Cards.Num() - 1)];
	}
	
	return FName();
}

void UMCSCardRegistrySubsystem::GetCardPacks(TArray<FName>& OutCardPacks) const
{
	OutCardPacks.Append(CardPacks);
}

FCardVisual UMCSCardRegistrySubsystem::GetCardVisual(FName Name, uint8 InType, ECardRarity InRarity) const
{
	if (VisualMap.Contains(Name))
	{
		UDataTable* Table = VisualMap[Name];
		TArray<FName> RowNames = Table->GetRowNames();

		for (const FName& RowName : RowNames)
		{
			FCardVisual* RowData = Table->FindRow<FCardVisual>(RowName, TEXT("Get Card Visual"));

			if (RowData && RowData->Type == InType && RowData->Rarity == InRarity)
			{
				return *RowData;
			}
		}
	}

	return FCardVisual();
}
