// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESCardAction.h"
#include "Components/ActorComponent.h"
#include "Core/Types/CardType.h"
#include "Types/Card.h"
#include "ESPlayerCardPlayComponent.generated.h"


enum class EGridDirection : uint8;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class EVEOFTHESTORM_API UESPlayerCardPlayComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UESPlayerCardPlayComponent();
	
	UFUNCTION(BlueprintCallable)
	virtual bool CanPlayCard(FCardData CardData);
	
	UFUNCTION(BlueprintCallable)
	virtual void StartPlayCard(FCardData CardData);
	
	UFUNCTION(BlueprintCallable)
	virtual bool PlayCard();

	UFUNCTION(BlueprintCallable)
	virtual void CancelPlayCard();

	UFUNCTION(BlueprintCallable)
	virtual void OnMouseTrigger(FVector Position);

	UFUNCTION(BlueprintCallable)
	virtual void OnRotate();

	bool IsPlayingCard();

	UFUNCTION(BlueprintCallable)
	void Clear();
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	bool CanTrigger() const;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TMap<ECardType, TSubclassOf<UESCardAction>> ActionClass;
	
	UPROPERTY(BlueprintReadOnly, Transient)
	TMap<ECardType, UESCardAction*> Actions;

	UPROPERTY(BlueprintReadOnly, Transient)
	UESCardAction* CurrentAction;
	
	UPROPERTY(BlueprintReadOnly)
	FCardData CurrentCard;

	UPROPERTY(BlueprintReadOnly)
	bool bIsPlayingCard = false;
};
