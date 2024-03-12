// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESCardFragment_Building.h"
#include "Core/Types/ResourceType.h"
#include "ESCardFragment_CardDropping.generated.h"

/**
 * 
 */
UCLASS()
class EVEOFTHESTORM_API UESCardFragment_CardDropping : public UCardFragment
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	int32 Period = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	EResourceType ResourceType = EResourceType::Food;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Data")
	int32 ResourceAmount = 0;

};
