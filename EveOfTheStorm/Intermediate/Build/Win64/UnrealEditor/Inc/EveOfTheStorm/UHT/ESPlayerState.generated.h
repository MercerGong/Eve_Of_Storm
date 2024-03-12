// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Player/ESPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVEOFTHESTORM_ESPlayerState_generated_h
#error "ESPlayerState.generated.h already included, missing '#pragma once' in ESPlayerState.h"
#endif
#define EVEOFTHESTORM_ESPlayerState_generated_h

#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_11_DELEGATE \
EVEOFTHESTORM_API void FOnFoodChangeEvent_DelegateWrapper(const FMulticastScriptDelegate& OnFoodChangeEvent, float NewValue, float OldValue);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_16_SPARSE_DATA
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentDrawCost); \
	DECLARE_FUNCTION(execOnDraw); \
	DECLARE_FUNCTION(execOnTurn);


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_16_ACCESSORS
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAESPlayerState(); \
	friend struct Z_Construct_UClass_AESPlayerState_Statics; \
public: \
	DECLARE_CLASS(AESPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EveOfTheStorm"), NO_API) \
	DECLARE_SERIALIZER(AESPlayerState)


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AESPlayerState(AESPlayerState&&); \
	NO_API AESPlayerState(const AESPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AESPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AESPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AESPlayerState) \
	NO_API virtual ~AESPlayerState();


#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_13_PROLOG
#define FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_16_SPARSE_DATA \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_16_ACCESSORS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_16_INCLASS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVEOFTHESTORM_API UClass* StaticClass<class AESPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
