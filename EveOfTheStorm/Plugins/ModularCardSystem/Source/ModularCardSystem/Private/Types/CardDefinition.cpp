// Fill out your copyright notice in the Description page of Project Settings.


#include "Types/CardDefinition.h"

UCardDefinition::UCardDefinition(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

const UCardFragment* UCardDefinition::FindFragmentByClass(TSubclassOf<UCardFragment> FragmentClass) const
{
	if (FragmentClass != nullptr)
	{
		for (UCardFragment* Fragment : Fragments)
		{
			if (Fragment && Fragment->IsA(FragmentClass))
			{
				return Fragment;
			}
		}
	}

	return nullptr;
}

const UCardFragment* ULyraInventoryFunctionLibrary::FindCardDefinitionFragment(TSubclassOf<UCardDefinition> ItemDef,
                                                                               TSubclassOf<UCardFragment> FragmentClass)
{
	if ((ItemDef != nullptr) && (FragmentClass != nullptr))
	{
		return GetDefault<UCardDefinition>(ItemDef)->FindFragmentByClass(FragmentClass);
	}
	return nullptr;
}
