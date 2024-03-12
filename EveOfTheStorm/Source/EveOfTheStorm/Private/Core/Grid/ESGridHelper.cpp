// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Grid/ESGridHelper.h"

#include "Core/Grid/ESBuildingSystem.h"
#include "Core/Grid/ESGridType.h"

TArray<FIntPoint> UESGridHelper::RotateShape(const TArray<FIntPoint>& Shape, EGridDirection Direction)
{
	TArray<FIntPoint> RotatedShape;

	int32 NumPoints = Shape.Num();
	RotatedShape.Reserve(NumPoints);

	for (const FIntPoint& Point : Shape)
	{
		FIntPoint RotatedPoint;

		switch (Direction)
		{
		case EGridDirection::North:
			RotatedPoint = Point;
			break;

		case EGridDirection::East:
			RotatedPoint.X = -Point.Y;
			RotatedPoint.Y = Point.X;
			break;

		case EGridDirection::South:
			RotatedPoint.X = -Point.X;
			RotatedPoint.Y = -Point.Y;
			break;

		case EGridDirection::West:
			RotatedPoint.X = Point.Y;
			RotatedPoint.Y = -Point.X;
			break;

		default:
			// Handle any other cases if necessary
			break;
		}

		RotatedShape.Add(RotatedPoint);
	}

	return RotatedShape;
}

FIntPoint UESGridHelper::CalculateCenter(const TArray<FIntPoint>& Shape)
{
	if (Shape.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Shape is empty"))
		return FIntPoint();
	}
	TArray<FIntPoint> Center;
	FIntPoint CenterPoint = FIntPoint::ZeroValue;
	for (const auto p : Shape)
	{
		CenterPoint.X += p.X;
		CenterPoint.Y += p.Y;
	}
	CenterPoint.X /= Shape.Num();
	CenterPoint.Y /= Shape.Num();
	return CenterPoint;
}

bool UESGridHelper::CanProduceFood(const FBuildingData& Data)
{
	for (auto& Reward : Data.Rewards)
	{
		if (Reward.ResourceType == EResourceType::Food && Reward.ResourceAmount > 0)
		{
			return true;
		}
	}
	return false;
}
