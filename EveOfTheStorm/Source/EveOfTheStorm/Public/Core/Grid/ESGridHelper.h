// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESGridHelper.generated.h"

enum class EGridDirection : uint8;
struct FBuildingData;
/**
 * 
 */
UCLASS()
class EVEOFTHESTORM_API UESGridHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static TArray<FIntPoint> RotateShape(const TArray<FIntPoint>& Shape, EGridDirection Direction);
	
	UFUNCTION(BlueprintCallable)
	static FIntPoint CalculateCenter(const TArray<FIntPoint>& Shape);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool CanProduceFood(const FBuildingData& Data);
};
