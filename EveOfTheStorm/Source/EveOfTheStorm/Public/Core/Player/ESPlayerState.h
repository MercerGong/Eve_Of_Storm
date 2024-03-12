// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ESPlayerState.generated.h"

class UESResourceSystem;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFoodChangeEvent, float, NewValue, float, OldValue);

UCLASS()
class EVEOFTHESTORM_API AESPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AESPlayerState();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(BlueprintAssignable)
	FOnFoodChangeEvent OnFoodChange;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="ES|PlayerState")
	TArray<struct FResourceDefinition> FoodDefinition;
	
	UESResourceSystem* GetResourceSystem() const
	{
		return ResourceSystem;
	}

	UFUNCTION(BlueprintCallable)
	void OnTurn();

	UFUNCTION(BlueprintCallable)
	void OnDraw();

	UFUNCTION(BlueprintCallable)
	float GetCurrentDrawCost() const;
	
protected:
	// virtual void FoodChanged(const FOnAttributeChangeData& Data);

	UPROPERTY(BlueprintReadOnly, Category="ES|PlayerState")
	UESResourceSystem* ResourceSystem;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="ES|PlayerState")
	float CurrentDrawCost = 100;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="ES|PlayerState")
	float TurnDrawCost = 10;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="ES|PlayerState")
	float CurrentConsumeFood = 60;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="ES|PlayerState")
	float TurnConsumeFood = 20;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="ES|PlayerState")
	float CurrentDrawBuff = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="ES|PlayerState")
	float CurrentDrawBuffTempo = 0.0f;
};
