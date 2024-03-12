// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/EveOfTheStormPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEveOfTheStormPlayerController() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AESPlayerController();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AEveOfTheStormPlayerController();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_AEveOfTheStormPlayerController_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	void AEveOfTheStormPlayerController::StaticRegisterNativesAEveOfTheStormPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEveOfTheStormPlayerController);
	UClass* Z_Construct_UClass_AEveOfTheStormPlayerController_NoRegister()
	{
		return AEveOfTheStormPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AEveOfTheStormPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectObjectClickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectObjectClickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectObjectTouchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectObjectTouchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoomAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseMoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseMoveAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AESPlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EveOfTheStormPlayerController.h" },
		{ "ModuleRelativePath", "EveOfTheStormPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
#endif
		{ "ModuleRelativePath", "EveOfTheStormPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time Threshold to know if it was a short press" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormPlayerController, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_ShortPressThreshold_MetaData), Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_ShortPressThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
#endif
		{ "ModuleRelativePath", "EveOfTheStormPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX Class that we will spawn when clicking" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormPlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_FXCursor_MetaData), Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_FXCursor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "EveOfTheStormPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_SelectObjectClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Select Object Input Action */" },
#endif
		{ "ModuleRelativePath", "EveOfTheStormPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select Object Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_SelectObjectClickAction = { "SelectObjectClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormPlayerController, SelectObjectClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_SelectObjectClickAction_MetaData), Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_SelectObjectClickAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_SelectObjectTouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Select Object  Input Action */" },
#endif
		{ "ModuleRelativePath", "EveOfTheStormPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select Object  Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_SelectObjectTouchAction = { "SelectObjectTouchAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormPlayerController, SelectObjectTouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_SelectObjectTouchAction_MetaData), Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_SelectObjectTouchAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_ZoomAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zoom Input Action */" },
#endif
		{ "ModuleRelativePath", "EveOfTheStormPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zoom Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_ZoomAction = { "ZoomAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormPlayerController, ZoomAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_ZoomAction_MetaData), Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_ZoomAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_CameraMoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zoom Input Action */" },
#endif
		{ "ModuleRelativePath", "EveOfTheStormPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zoom Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_CameraMoveAction = { "CameraMoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormPlayerController, CameraMoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_CameraMoveAction_MetaData), Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_CameraMoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_MouseMoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zoom Input Action */" },
#endif
		{ "ModuleRelativePath", "EveOfTheStormPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zoom Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_MouseMoveAction = { "MouseMoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEveOfTheStormPlayerController, MouseMoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_MouseMoveAction_MetaData), Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_MouseMoveAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_ShortPressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_FXCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_SelectObjectClickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_SelectObjectTouchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_ZoomAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_CameraMoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::NewProp_MouseMoveAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEveOfTheStormPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::ClassParams = {
		&AEveOfTheStormPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEveOfTheStormPlayerController()
	{
		if (!Z_Registration_Info_UClass_AEveOfTheStormPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEveOfTheStormPlayerController.OuterSingleton, Z_Construct_UClass_AEveOfTheStormPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEveOfTheStormPlayerController.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<AEveOfTheStormPlayerController>()
	{
		return AEveOfTheStormPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEveOfTheStormPlayerController);
	AEveOfTheStormPlayerController::~AEveOfTheStormPlayerController() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_EveOfTheStormPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_EveOfTheStormPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEveOfTheStormPlayerController, AEveOfTheStormPlayerController::StaticClass, TEXT("AEveOfTheStormPlayerController"), &Z_Registration_Info_UClass_AEveOfTheStormPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEveOfTheStormPlayerController), 618186468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_EveOfTheStormPlayerController_h_3376358579(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_EveOfTheStormPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_EveOfTheStormPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
