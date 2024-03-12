// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Game/ESResourceSystem.h"

void UESResourceSystem::Init(const TArray<FResourceDefinition>& ResourceDefinitions)
{
	for (auto& Resource : ResourceDefinitions)
	{
		ResourceMap.Emplace(Resource.Type, Resource.Amount);
		ResourceMaxMap.Emplace(Resource.Type, Resource.MaxCapacity);
	}
}

float UESResourceSystem::GetResourceValue(EResourceType ResourceType)
{
	return ResourceMap.FindOrAdd(ResourceType, 0);
}

void UESResourceSystem::SetResourceValue(EResourceType ResourceType, float Value)
{
	float OldValue = GetResourceValue(ResourceType);
	ResourceMap.Emplace(ResourceType, FMath::Floor(Value));
	OnResourceChange.Broadcast(ResourceType, Value, OldValue);
}

float UESResourceSystem::AddResourceValue(EResourceType ResourceType, float Value)
{
	float Max = GetMaxResourceValue(ResourceType);
	float Ret = GetResourceValue(ResourceType) + FMath::Floor(Value);;
	if (Max > 0) Ret = FMath::Clamp(Ret, 0.f, Max);
	
	SetResourceValue(ResourceType, Ret);
	return Ret;
}

float UESResourceSystem::SubtractResourceValue(EResourceType ResourceType, float Value)
{
	float Ret = GetResourceValue(ResourceType) -  FMath::Floor(Value);
	SetResourceValue(ResourceType, Ret);
	return Ret;
}

bool UESResourceSystem::HasEnoughResource(EResourceType ResourceType, float Value)
{
	float Ret = GetResourceValue(ResourceType);
	return Ret >= Value;
}

float UESResourceSystem::GetMaxResourceValue(EResourceType ResourceType)
{
	return ResourceMaxMap.FindOrAdd(ResourceType, 0);
}

float UESResourceSystem::SetMaxResourceValue(EResourceType ResourceType, float Value)
{
	return ResourceMaxMap.Emplace(ResourceType, FMath::Floor(Value));
}

float UESResourceSystem::ValidResource(EResourceType ResourceType, float Value)
{
	float Max = GetMaxResourceValue(ResourceType);
	if (Max == 0)
	{
		return FMath::Max(Value, 0.f);
	}
	return FMath::Clamp(Value, 0.f, Max);
}

float UESResourceSystem::ApplyModifier(FResourceModifier Modifier)
{
	float Value = GetResourceValue(Modifier.Type);
	switch (Modifier.ModifierOp)
	{
	case Additive:
		Value += Modifier.Amount;
		break;
	case Multiplicitive:
		Value *= Modifier.Amount;
		break;
	case Division:
		Value /= Modifier.Amount;
		break;
	case Override:
		Value = Modifier.Amount;
		break;
	case Max:
		break;
	default: ;
	}
	Value = FMath::Floor(Value);
	Value = ValidResource(Modifier.Type, Value);
	SetResourceValue(Modifier.Type, Value);
	return Value;
}
