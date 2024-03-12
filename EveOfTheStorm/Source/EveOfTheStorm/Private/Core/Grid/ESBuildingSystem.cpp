// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Grid/ESBuildingSystem.h"

#include "Core/Grid/ESGridHelper.h"
#include "Core/Grid/ESGridSystem.h"


bool FBuildingInfo::Tick(int Tick)
{
	if (Destroyed) return false;
	
	for (auto& p : Data.Rewards)
	{
		if (p.Period == 0)
		{
			continue;
		}
	
		if (Tick % p.Period == 0)
		{
			return true;
		}
	}
	return false;
}

// Sets default values
UESBuildingSystem::UESBuildingSystem()
{
}

void UESBuildingSystem::Init(UESGridSystem* InGridSystem)
{
	GridSystem = InGridSystem;

	GridSizeX = InGridSystem->GridSizeX;
	GridSizeY = InGridSystem->GridSizeY;
	
	Grid.Empty();
	Grid.SetNum(GridSizeY);
	for (int i = 0; i < GridSizeY; i++)
	{
		Grid[i].Init(-1, GridSizeX);
		// Grid[i].SetNum(GridSizeX);
	}
}

void UESBuildingSystem::PlaceInitialBuilding(TArray<FBuildingInitData> Data)
{
	const int32 X = GridSizeX / 2;
	const int32 Y = GridSizeY / 2;
	
	for (auto& Building : Data)
	{
		PlaceBuilding(
			FIntPoint(X + Building.Pos.X, Y + Building.Pos.Y),
			Building.Data,
			EGridDirection::North
		);
	}
}

void UESBuildingSystem::SetCurrentTick(int InTick)
{
	if (InTick < 0)
	{
		return;
	}

	CurrentTick = InTick;
}

bool UESBuildingSystem::PlaceBuilding(FIntPoint Position, FBuildingData InBuildingData, EGridDirection Direction)
{
	if (!CanPlaceBuilding(Position, InBuildingData, Direction))
	{
		return false;
	}
	
	TArray<FIntPoint> RotatedShape = UESGridHelper::RotateShape(InBuildingData.Shape, Direction);
	InBuildingData.Shape = RotatedShape;
	
	// Generate Info
	FBuildingInfo info;
	info.Data = InBuildingData;
	info.Position = Position;
	info.StartPeriod = CurrentTick;

	// Place data
	int Index = BuildingData.Add(info);
	for (auto p : InBuildingData.Shape)
	{
		Grid[Position.X + p.X][Position.Y + p.Y] = Index;
	}

	// trigger event
	OnBuildingPlacedEvent.Broadcast(Position.X, Position.Y, InBuildingData);
	return true;
}

// bool UESBuildingSystem::PlaceBuilding(FIntPoint Position, FBuildingData InBuildingData)
// {
// 	return PlaceBuilding(Position, InBuildingData, EGridDirection::North);
// }

bool UESBuildingSystem::DropBuilding(int index)
{
	if (BuildingData.Num() <= index)
	{
		return false;
	}

	FIntPoint Position = BuildingData[index].Position;
	for (auto& p : BuildingData[index].Data.Shape)
	{
		Grid[Position.X + p.X][Position.Y + p.Y] = -1;
	}

	BuildingData[index].Destroyed = true;
	OnBuildingRemovedEvent.Broadcast(index);
	return true;
}

bool UESBuildingSystem::DropBuildingByPosition(FIntPoint Pos)
{
	if (!GridSystem->ValidPosition(Pos.X, Pos.Y))
		return false;
	int Index = Grid[Pos.X][Pos.Y];
	if (Index == -1)
		return false;

	return DropBuilding(Index);
}

bool UESBuildingSystem::GetBuildingByIndex(int index, FBuildingInfo& BuildingInfo)
{
	if (BuildingData.Num() <= index)
	{
		return false;
	}

	BuildingInfo = BuildingData[index];
	return true;
}

int UESBuildingSystem::GetBuildingByPosition(FIntPoint Pos, FBuildingInfo& BuildingInfo)
{
	if (!GridSystem->ValidPosition(Pos.X, Pos.Y))
		return -1;

	int Index = Grid[Pos.X][Pos.Y];
	if (Index == -1)
		return -1;

	BuildingInfo = BuildingData[Index];
	return Index;
}

bool UESBuildingSystem::HasBuilding(FIntPoint Pos) const
{
	if (!GridSystem->ValidPosition(Pos.X, Pos.Y))
		return false;
	return Grid[Pos.X][Pos.Y] != -1;
}

bool UESBuildingSystem::CanPlaceBuilding(FIntPoint Pos, FBuildingData InBuildingData, EGridDirection Direction) const
{
	if (!GridSystem->ValidPosition(Pos.X, Pos.Y))
		return false;
	
	if (!GridSystem->IsGroundValid(Pos.X, Pos.Y, InBuildingData.Shape, InBuildingData.RequireGroundType))
		return false;
	
	TArray<FIntPoint> RotatedShape = UESGridHelper::RotateShape(InBuildingData.Shape, Direction);
	for (auto& p : RotatedShape)
	{
		// UE_LOG(LogTemp, Warning, TEXT("Check Grid: %d"), Grid[Pos.X + p.X][Pos.Y + p.Y])
		if (Grid[Pos.X + p.X][Pos.Y + p.Y] != -1) return false;
	}

	return true;
}

void UESBuildingSystem::TickBuilding()
{
	CurrentTick++;

	// Tick all buildings
	for (int i = 0; i < BuildingData.Num(); i++)
	{
		if (BuildingData[i].Destroyed) continue;
		
		int t = CurrentTick - BuildingData[i].StartPeriod;
		if (BuildingData[i].Tick(t))
		{
			OnBuildingTriggerEvent.Broadcast(BuildingData[i].Data, t);
		}
	}
}

float UESBuildingSystem::GetEstimateCost()
{
	int TestTick = CurrentTick + 1;
	float BuildingCost = 0;
	
	// Tick all buildings
	for (int i = 0; i < BuildingData.Num(); i++)
	{
		if (BuildingData[i].Destroyed) continue;
		
		int t = TestTick - BuildingData[i].StartPeriod;
		if (BuildingData[i].Tick(t))
		{
			for (auto& r : BuildingData[i].Data.Rewards)
			{
				if (r.ResourceType != EResourceType::Food)
				{
					continue;
				}
				
				if (t % r.Period == 0)
				{
					BuildingCost += r.ResourceAmount;
				}
			}
		}
	}
	
	return BuildingCost;
}
