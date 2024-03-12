// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Types/CardType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVEOFTHESTORM_CardType_generated_h
#error "CardType.generated.h already included, missing '#pragma once' in CardType.h"
#endif
#define EVEOFTHESTORM_CardType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_CardType_h


#define FOREACH_ENUM_ECARDTYPE(op) \
	op(ECardType::Ground) \
	op(ECardType::Blueprint) \
	op(ECardType::Policy) 

enum class ECardType : uint8;
template<> struct TIsUEnumClass<ECardType> { enum { Value = true }; };
template<> EVEOFTHESTORM_API UEnum* StaticEnum<ECardType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
