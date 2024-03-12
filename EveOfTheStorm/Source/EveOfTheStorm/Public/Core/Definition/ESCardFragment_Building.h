// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Types/CardDefinition.h"
#include "ESCardFragment_Building.generated.h"

/**
 * 
 */
UCLASS()
class EVEOFTHESTORM_API UESCardFragment_Building : public UCardFragment
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDataTableRowHandle Building;
};
