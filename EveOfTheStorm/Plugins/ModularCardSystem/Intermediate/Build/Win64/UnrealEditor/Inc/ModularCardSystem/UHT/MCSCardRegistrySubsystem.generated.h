// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MCSCardRegistrySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCardPackAsset;
class UDataTable;
enum class ECardRarity : uint8;
struct FCardData;
struct FCardFilterParameters;
struct FCardVisual;
#ifdef MODULARCARDSYSTEM_MCSCardRegistrySubsystem_generated_h
#error "MCSCardRegistrySubsystem.generated.h already included, missing '#pragma once' in MCSCardRegistrySubsystem.h"
#endif
#define MODULARCARDSYSTEM_MCSCardRegistrySubsystem_generated_h

#define FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCardFilterParameters_Statics; \
	MODULARCARDSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MODULARCARDSYSTEM_API UScriptStruct* StaticStruct<struct FCardFilterParameters>();

#define FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_28_SPARSE_DATA
#define FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCardVisual); \
	DECLARE_FUNCTION(execGetCardPacks); \
	DECLARE_FUNCTION(execGetRandomCard); \
	DECLARE_FUNCTION(execDrawRandomCard); \
	DECLARE_FUNCTION(execFilterCards); \
	DECLARE_FUNCTION(execGetCardData); \
	DECLARE_FUNCTION(execRegisterCardPack); \
	DECLARE_FUNCTION(execRegisterTheme);


#define FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_28_ACCESSORS
#define FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMCSCardRegistrySubsystem(); \
	friend struct Z_Construct_UClass_UMCSCardRegistrySubsystem_Statics; \
public: \
	DECLARE_CLASS(UMCSCardRegistrySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularCardSystem"), NO_API) \
	DECLARE_SERIALIZER(UMCSCardRegistrySubsystem)


#define FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMCSCardRegistrySubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMCSCardRegistrySubsystem(UMCSCardRegistrySubsystem&&); \
	NO_API UMCSCardRegistrySubsystem(const UMCSCardRegistrySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMCSCardRegistrySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMCSCardRegistrySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMCSCardRegistrySubsystem) \
	NO_API virtual ~UMCSCardRegistrySubsystem();


#define FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_25_PROLOG
#define FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_28_SPARSE_DATA \
	FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_28_ACCESSORS \
	FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARCARDSYSTEM_API UClass* StaticClass<class UMCSCardRegistrySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSCardRegistrySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
