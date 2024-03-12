// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESCardFragment_Building.h"
#include "UObject/Object.h"
#include "ESCardFragment_GroundBuilding.generated.h"


USTRUCT(BlueprintType)
struct FGridBuildStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Percentage = 1.0f;

	// If limit is zero, that means it has no limit
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int Limit = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FDataTableRowHandle Building;
};
/**
 * 
 */
UCLASS()
class EVEOFTHESTORM_API UESCardFragment_GroundBuilding : public UCardFragment
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FGridBuildStruct> Building;
};
