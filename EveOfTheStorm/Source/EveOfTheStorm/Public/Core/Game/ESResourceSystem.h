// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Core/Types/ResourceType.h"
#include "Types/Card.h"
#include "ESResourceSystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnResourceChangeEvent, EResourceType, type, float, NewValue, float, OldValue);

USTRUCT(BlueprintType)
struct FResourceDefinition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EResourceType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Amount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxCapacity;
};

USTRUCT(BlueprintType)
struct FResourceModifier
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EResourceType Type;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Attribute Data")
	TEnumAsByte<ECardModOp> ModifierOp = ECardModOp::Additive;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Amount;
};

/**
 * 
 */
UCLASS(BlueprintType)
class EVEOFTHESTORM_API UESResourceSystem : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category="ES|ResourceSystem")
	void Init(const TArray<FResourceDefinition>& ResourceDefinitions);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintPure, Category="ES|ResourceSystem")
	float GetResourceValue(EResourceType ResourceType);

	UFUNCTION(BlueprintCallable, Category="ES|ResourceSystem")
	void SetResourceValue(EResourceType ResourceType, float Value);

	UFUNCTION(BlueprintCallable, Category="ES|ResourceSystem")
	float AddResourceValue(EResourceType ResourceType, float Value);
	
	UFUNCTION(BlueprintCallable, Category="ES|ResourceSystem")
	float SubtractResourceValue(EResourceType ResourceType, float Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="ES|ResourceSystem")
	bool HasEnoughResource(EResourceType ResourceType, float Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="ES|ResourceSystem")
	float GetMaxResourceValue(EResourceType ResourceType);

	UFUNCTION(BlueprintCallable, Category="ES|ResourceSystem")
	float SetMaxResourceValue(EResourceType ResourceType, float Value);

	UFUNCTION(BlueprintCallable, Category="ES|ResourceSystem")
	float ValidResource(EResourceType ResourceType, float Value);

	UFUNCTION(BlueprintCallable, Category="ES|ResourceSystem")
	float ApplyModifier(FResourceModifier Modifier);

	UPROPERTY(BlueprintAssignable, Category="ES|ResourceSystem")
	FOnResourceChangeEvent OnResourceChange;
	
protected:
	UPROPERTY(BlueprintReadWrite, Category="ES|ResourceSystem")
	TMap<EResourceType, float> ResourceMap;

	UPROPERTY(BlueprintReadWrite, Category="ES|ResourceSystem")
	TMap<EResourceType, float> ResourceMaxMap;
};
