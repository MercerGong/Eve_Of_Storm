// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Grid/ESGridSystem.h"
#include "Types/Card.h"
#include "ESCardFragment_Ground.generated.h"

/**
 * 
 */
UCLASS()
class EVEOFTHESTORM_API UESCardFragment_Ground : public UCardFragment
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGridTile Grid;
};
