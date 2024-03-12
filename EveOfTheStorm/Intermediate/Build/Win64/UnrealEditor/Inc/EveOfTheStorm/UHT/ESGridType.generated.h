// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Grid/ESGridType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVEOFTHESTORM_ESGridType_generated_h
#error "ESGridType.generated.h already included, missing '#pragma once' in ESGridType.h"
#endif
#define EVEOFTHESTORM_ESGridType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridType_h


#define FOREACH_ENUM_EGRIPTILESHAPE(op) \
	op(EGripTileShape::Single) \
	op(EGripTileShape::Square) \
	op(EGripTileShape::Line) 

enum class EGripTileShape : uint8;
template<> struct TIsUEnumClass<EGripTileShape> { enum { Value = true }; };
template<> EVEOFTHESTORM_API UEnum* StaticEnum<EGripTileShape>();

#define FOREACH_ENUM_EGRIDDIRECTION(op) \
	op(EGridDirection::North) \
	op(EGridDirection::East) \
	op(EGridDirection::South) \
	op(EGridDirection::West) 

enum class EGridDirection : uint8;
template<> struct TIsUEnumClass<EGridDirection> { enum { Value = true }; };
template<> EVEOFTHESTORM_API UEnum* StaticEnum<EGridDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
