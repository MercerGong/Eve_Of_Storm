// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/Card.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARCARDSYSTEM_Card_generated_h
#error "Card.generated.h already included, missing '#pragma once' in Card.h"
#endif
#define MODULARCARDSYSTEM_Card_generated_h

#define FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_Card_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCardAttribute_Statics; \
	MODULARCARDSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MODULARCARDSYSTEM_API UScriptStruct* StaticStruct<struct FCardAttribute>();

#define FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_Card_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCardVisual_Statics; \
	MODULARCARDSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MODULARCARDSYSTEM_API UScriptStruct* StaticStruct<struct FCardVisual>();

#define FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_Card_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCardData_Statics; \
	MODULARCARDSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MODULARCARDSYSTEM_API UScriptStruct* StaticStruct<struct FCardData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_Card_h


#define FOREACH_ENUM_ECARDRARITY(op) \
	op(ECardRarity::Common) \
	op(ECardRarity::Uncommon) \
	op(ECardRarity::Rare) \
	op(ECardRarity::Epic) \
	op(ECardRarity::Legendary) 

enum class ECardRarity : uint8;
template<> struct TIsUEnumClass<ECardRarity> { enum { Value = true }; };
template<> MODULARCARDSYSTEM_API UEnum* StaticEnum<ECardRarity>();

#define FOREACH_ENUM_ECARDMODOP(op) \
	op(Additive) \
	op(Multiplicitive) \
	op(Division) \
	op(Override) \
	op(Max) 

enum ECardModOp : int;
template<> MODULARCARDSYSTEM_API UEnum* StaticEnum<ECardModOp>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
