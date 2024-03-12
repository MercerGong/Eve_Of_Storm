// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Game/ESDefaultGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVEOFTHESTORM_ESDefaultGameMode_generated_h
#error "ESDefaultGameMode.generated.h already included, missing '#pragma once' in ESDefaultGameMode.h"
#endif
#define EVEOFTHESTORM_ESDefaultGameMode_generated_h

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_17_DELEGATE \
EVEOFTHESTORM_API void FGameTurnTriggerEvent_DelegateWrapper(const FMulticastScriptDelegate& GameTurnTriggerEvent, int32 CurrentTurn);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDefaultBuilding_Statics; \
	EVEOFTHESTORM_API static class UScriptStruct* StaticStruct();


template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<struct FDefaultBuilding>();

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_34_SPARSE_DATA
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_34_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPauseTime); \
	DECLARE_FUNCTION(execSkipTurn);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_34_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAESDefaultGameMode(); \
	friend struct Z_Construct_UClass_AESDefaultGameMode_Statics; \
public: \
	DECLARE_CLASS(AESDefaultGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EveOfTheStorm"), NO_API) \
	DECLARE_SERIALIZER(AESDefaultGameMode)


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AESDefaultGameMode(AESDefaultGameMode&&); \
	NO_API AESDefaultGameMode(const AESDefaultGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AESDefaultGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AESDefaultGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AESDefaultGameMode) \
	NO_API virtual ~AESDefaultGameMode();


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_31_PROLOG
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_34_SPARSE_DATA \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_34_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_34_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_34_INCLASS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVEOFTHESTORM_API UClass* StaticClass<class AESDefaultGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESDefaultGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
