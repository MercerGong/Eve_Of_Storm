// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Player/ESPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESPlayerController();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESPlayerController_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESPlayerCardPlayComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	void AESPlayerController::StaticRegisterNativesAESPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AESPlayerController);
	UClass* Z_Construct_UClass_AESPlayerController_NoRegister()
	{
		return AESPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AESPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardPlayComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardPlayComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AESPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Core/Player/ESPlayerController.h" },
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AESPlayerController_Statics::NewProp_CardPlayComponent_MetaData[] = {
		{ "Category", "ESPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Player/ESPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AESPlayerController_Statics::NewProp_CardPlayComponent = { "CardPlayComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AESPlayerController, CardPlayComponent), Z_Construct_UClass_UESPlayerCardPlayComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerController_Statics::NewProp_CardPlayComponent_MetaData), Z_Construct_UClass_AESPlayerController_Statics::NewProp_CardPlayComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AESPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AESPlayerController_Statics::NewProp_CardPlayComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AESPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AESPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AESPlayerController_Statics::ClassParams = {
		&AESPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AESPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AESPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AESPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AESPlayerController()
	{
		if (!Z_Registration_Info_UClass_AESPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AESPlayerController.OuterSingleton, Z_Construct_UClass_AESPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AESPlayerController.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<AESPlayerController>()
	{
		return AESPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AESPlayerController);
	AESPlayerController::~AESPlayerController() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AESPlayerController, AESPlayerController::StaticClass, TEXT("AESPlayerController"), &Z_Registration_Info_UClass_AESPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AESPlayerController), 1260195279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerController_h_1877916374(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Player_ESPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
