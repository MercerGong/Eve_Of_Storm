// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESGridType.generated.h"

UENUM(BlueprintType, Category="ES|Grid", meta=(Bitflags, DisplayName="Grid Type"))
enum class EGripTileShape: uint8
{
	Single,
	Square,
	Line
};

UENUM(BlueprintType, Category="ES|Grid", meta=(Bitflags, DisplayName="Grid Direction"))
enum class EGridDirection : uint8
{
	North,
	East,
	South,
	West
};