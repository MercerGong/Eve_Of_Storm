// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESCardFragment_Building.h"
#include "Engine/DataTable.h"
#include "UObject/Object.h"
#include "ESCardFragment_CardUpgrade.generated.h"

/**
 * 
 */
UCLASS()
class EVEOFTHESTORM_API UESCardFragment_CardUpgrade : public UCardFragment
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FDataTableRowHandle> UpgradeCards;
};
