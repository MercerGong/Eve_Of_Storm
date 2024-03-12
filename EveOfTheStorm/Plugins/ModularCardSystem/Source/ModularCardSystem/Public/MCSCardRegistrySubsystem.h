// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Types/Card.h"
#include "MCSCardRegistrySubsystem.generated.h"

USTRUCT(BlueprintType)
struct FCardFilterParameters
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Card Filter")
	TArray<ECardRarity> Rarity;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Card Filter")
	TArray<uint8> Type;
};

/**
 * 
 */
UCLASS()
class MODULARCARDSYSTEM_API UMCSCardRegistrySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	UFUNCTION(BlueprintCallable, Category = "Card|Registry")
	void RegisterTheme(FName Theme, class UDataTable* CardTheme);
	
	UFUNCTION(BlueprintCallable, Category = "Card|Registry")
	void RegisterCardPack(class UCardPackAsset* CardPack);

	UFUNCTION(BlueprintCallable, Category = "Card|Registry")
	FCardData GetCardData(FName CardName) const;

	UFUNCTION(BlueprintCallable, Category = "Card|Registry")
	void FilterCards(const FCardFilterParameters& Filter, TArray<FName>& OutCards) const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure=false, Category = "Card|Registry")
	FName DrawRandomCard() const;

	UFUNCTION(BlueprintCallable, BlueprintPure=false, Category = "Card|Registry")
	FName GetRandomCard(const FCardFilterParameters& Filter) const;

	// GETTER
	UFUNCTION(BlueprintCallable, Category = "Card|Registry")
	void GetCardPacks(TArray<FName>& OutCardPacks) const;

	UFUNCTION(BlueprintCallable, Category = "Card|Registry")
	FCardVisual GetCardVisual(FName Name, uint8 InType, ECardRarity InRarity) const;
	
protected:
	// UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Cards")
	// TArray<class UCardPackAsset*> CardPacks;
	UPROPERTY(BlueprintReadOnly, Transient, Category = "Cards")
	TMap<ECardRarity, float> Rarity;
	
	UPROPERTY(BlueprintReadOnly, Transient, Category = "Cards")
	TMap<uint8, float> Type;
	
	UPROPERTY(BlueprintReadOnly, Transient, Category = "Cards")
	TArray<FName> CardPacks;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Cards")
	TSubclassOf<class UMCSCardWidget> CardWidget;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Cards")
	TSubclassOf<class AMCSCard> CardActor;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Cards")
	bool bEnableCardLock = false;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Cards")
	TMap<FName, bool> CardUnlockMap;

private:
	UPROPERTY(Transient)
	TMap<FName, FCardData> CardMap;
	
	UPROPERTY(Transient)
	TMap<FName, UDataTable*> VisualMap;
};
