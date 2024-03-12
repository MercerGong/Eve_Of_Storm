// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CoreUObject.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CardDefinition.generated.h"


//////////////////////////////////////////////////////////////////////

// Represents a fragment of an item definition
UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew, Abstract)
class MODULARCARDSYSTEM_API UCardFragment : public UObject
{
	GENERATED_BODY()
};

//////////////////////////////////////////////////////////////////////

/**
 * 
 */
UCLASS(Blueprintable, Const, Abstract)
class MODULARCARDSYSTEM_API UCardDefinition : public UObject
{
	GENERATED_BODY()

public:
	UCardDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Display)
	FText DisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Display, Instanced)
	TArray<TObjectPtr<UCardFragment>> Fragments;

public:
	const UCardFragment* FindFragmentByClass(TSubclassOf<UCardFragment> FragmentClass) const;
};


//@TODO: Make into a subsystem instead?
UCLASS()
class ULyraInventoryFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta=(DeterminesOutputType=FragmentClass))
	static const UCardFragment* FindCardDefinitionFragment(TSubclassOf<UCardDefinition> ItemDef, TSubclassOf<UCardFragment> FragmentClass);
};