// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Types/GroundType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVEOFTHESTORM_GroundType_generated_h
#error "GroundType.generated.h already included, missing '#pragma once' in GroundType.h"
#endif
#define EVEOFTHESTORM_GroundType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Types_GroundType_h


#define FOREACH_ENUM_EGROUNDTYPE(op) \
	op(EGroundType::None) \
	op(EGroundType::Stone) \
	op(EGroundType::Sand) \
	op(EGroundType::Grass) \
	op(EGroundType::Water) \
	op(EGroundType::Mountain) 

enum class EGroundType : uint8;
template<> struct TIsUEnumClass<EGroundType> { enum { Value = true }; };
template<> EVEOFTHESTORM_API UEnum* StaticEnum<EGroundType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
