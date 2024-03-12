// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Types/Card.h"
#include "UObject/Object.h"
#include "ESCardAction.generated.h"

class AESDefaultGameMode;
enum class EGridDirection : uint8;
struct FCardData;

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, Abstract, meta = (ShowWorldContextPin))
class EVEOFTHESTORM_API UESCardAction : public UObject
{
	GENERATED_BODY()

public:
	UESCardAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	UFUNCTION(BlueprintCallable)
	virtual void Init(UWorld* World, APlayerController* PlayerController);

	UFUNCTION(BlueprintImplementableEvent, DisplayName="OnInit")
	void K2_Init(APlayerController* PlayerController);
	
	UFUNCTION(BlueprintCallable)
	virtual bool CanPlayCard(FCardData CardData);

	UFUNCTION(BlueprintImplementableEvent, DisplayName="CanPlayCard")
	void K2_CanPlayCard(FCardData CardData, bool& Result);

	UFUNCTION(BlueprintCallable)
	virtual void StartPlayCard(FCardData CardData);

	UFUNCTION(BlueprintImplementableEvent, DisplayName="OnStartPlayCard")
	void K2_StartPlayCard(FCardData CardData);
	
	UFUNCTION(BlueprintCallable)
	virtual bool PlayCard();

	UFUNCTION(BlueprintImplementableEvent, DisplayName="OnPlayCard")
	void K2_PlayCard(bool& Result);

	UFUNCTION(BlueprintCallable)
	virtual void CancelPlayCard();

	UFUNCTION(BlueprintImplementableEvent, DisplayName="OnCancelPlayCard")
	void K2_CancelPlayCard();

	UFUNCTION(BlueprintCallable)
	virtual void OnMouseTrigger(FVector Position);

	UFUNCTION(BlueprintImplementableEvent, DisplayName="OnMouseTrigger")
	void K2_MouseTrigger(FVector Position);

	UFUNCTION(BlueprintCallable)
	virtual void OnRotate();
	
	UFUNCTION(BlueprintImplementableEvent, DisplayName="OnRotate")
	void K2_Rotate();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	AESDefaultGameMode* GetESGameMode();

	virtual UWorld* GetWorld() const override final { return (WorldPrivate ? WorldPrivate : GetWorld_Uncached()); }
	
protected:
	UPROPERTY(BlueprintReadOnly)
	FCardData CurrentCard;

	UPROPERTY(BlueprintReadOnly)
	bool IsPlayingCard = false;

private:

	UWorld* GetWorld_Uncached() const;
	
	UWorld* WorldPrivate;
};
