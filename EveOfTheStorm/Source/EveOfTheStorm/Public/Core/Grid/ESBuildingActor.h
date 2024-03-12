// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESBuildingSystem.h"
#include "ESGridType.h"
#include "GameFramework/Actor.h"
#include "ESBuildingActor.generated.h"

UCLASS()
class EVEOFTHESTORM_API AESBuildingActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AESBuildingActor();

	UFUNCTION(BlueprintCallable)
	void Init(FIntPoint InPos, FBuildingData InBuildingData, int ImageIndex, EGridDirection Direction);

	UFUNCTION(BlueprintCallable)
	void TickTurn(int deltaTurn);
	
	UFUNCTION(BlueprintCallable)
	void SetPosition(FIntPoint InPos);

	UFUNCTION(BlueprintCallable)
	void SetDirection(EGridDirection InDirection);

	DECLARE_EVENT_TwoParams(AESBuildingActor, FOnBuildingTriggeredEvent, const FBuildingData&, int32)
	FOnBuildingTriggeredEvent& OnBuildingTriggered() {return OnBuildingTriggeredEvent;}
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnClick();
	
protected:
	bool CheckTick(int Turn);
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly)
	FBuildingData Data;

	UPROPERTY(BlueprintReadOnly)
	EGridDirection Direction = EGridDirection::North;
	
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	USceneComponent* RootSceneComponent;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	UMaterialInterface* BaseMaterial;

	UPROPERTY(BlueprintReadOnly, Transient)
	UMaterialInstanceDynamic* DynamicMaterial = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Building Data")
	FIntPoint Position;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Building Data")
	int32 OffsetPeriod;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Building Data")
	int32 StartPeriod;

private:
	FOnBuildingTriggeredEvent OnBuildingTriggeredEvent;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
 