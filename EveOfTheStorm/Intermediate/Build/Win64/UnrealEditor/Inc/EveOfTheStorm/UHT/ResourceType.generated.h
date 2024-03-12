// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Types/ResourceType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVEOFTHESTORM_ResourceType_generated_h
#error "ResourceType.generated.h already included, missing '#pragma once' in ResourceType.h"
#endif
#define EVEOFTHESTORM_ResourceType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_ResourceType_h


#define FOREACH_ENUM_ERESOURCETYPE(op) \
	op(EResourceType::Food) \
	op(EResourceType::Tech) \
	op(EResourceType::MaxTech) 

enum class EResourceType : uint8;
template<> struct TIsUEnumClass<EResourceType> { enum { Value = true }; };
template<> EVEOFTHESTORM_API UEnum* StaticEnum<EResourceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
