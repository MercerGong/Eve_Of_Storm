// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Definition/ESCardFragment_CardEffects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESCardFragment_CardEffects() {}
// Cross Module References
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardEffect_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardFragment_CardEffects();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardFragment_CardEffects_NoRegister();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UCardFragment();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	void UESCardFragment_CardEffects::StaticRegisterNativesUESCardFragment_CardEffects()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESCardFragment_CardEffects);
	UClass* Z_Construct_UClass_UESCardFragment_CardEffects_NoRegister()
	{
		return UESCardFragment_CardEffects::StaticClass();
	}
	struct Z_Construct_UClass_UESCardFragment_CardEffects_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardPlayEffect_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CardPlayEffect_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardPlayEffect_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CardPlayEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardDroppedEffect_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CardDroppedEffect_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardDroppedEffect_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CardDroppedEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESCardFragment_CardEffects_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCardFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardEffects_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_CardEffects_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Definition/ESCardFragment_CardEffects.h" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_CardEffects.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardPlayEffect_Inner_MetaData[] = {
		{ "Category", "ESCardFragment_CardEffects" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_CardEffects.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardPlayEffect_Inner = { "CardPlayEffect", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UESCardEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardPlayEffect_Inner_MetaData), Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardPlayEffect_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardPlayEffect_MetaData[] = {
		{ "Category", "ESCardFragment_CardEffects" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_CardEffects.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardPlayEffect = { "CardPlayEffect", nullptr, (EPropertyFlags)0x001400800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESCardFragment_CardEffects, CardPlayEffect), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardPlayEffect_MetaData), Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardPlayEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardDroppedEffect_Inner_MetaData[] = {
		{ "Category", "ESCardFragment_CardEffects" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_CardEffects.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardDroppedEffect_Inner = { "CardDroppedEffect", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UESCardEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardDroppedEffect_Inner_MetaData), Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardDroppedEffect_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardDroppedEffect_MetaData[] = {
		{ "Category", "ESCardFragment_CardEffects" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_CardEffects.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardDroppedEffect = { "CardDroppedEffect", nullptr, (EPropertyFlags)0x001400800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESCardFragment_CardEffects, CardDroppedEffect), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardDroppedEffect_MetaData), Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardDroppedEffect_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UESCardFragment_CardEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardPlayEffect_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardPlayEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardDroppedEffect_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardFragment_CardEffects_Statics::NewProp_CardDroppedEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESCardFragment_CardEffects_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESCardFragment_CardEffects>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESCardFragment_CardEffects_Statics::ClassParams = {
		&UESCardFragment_CardEffects::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UESCardFragment_CardEffects_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardEffects_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardEffects_Statics::Class_MetaDataParams), Z_Construct_UClass_UESCardFragment_CardEffects_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardEffects_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UESCardFragment_CardEffects()
	{
		if (!Z_Registration_Info_UClass_UESCardFragment_CardEffects.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESCardFragment_CardEffects.OuterSingleton, Z_Construct_UClass_UESCardFragment_CardEffects_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESCardFragment_CardEffects.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESCardFragment_CardEffects>()
	{
		return UESCardFragment_CardEffects::StaticClass();
	}
	UESCardFragment_CardEffects::UESCardFragment_CardEffects(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESCardFragment_CardEffects);
	UESCardFragment_CardEffects::~UESCardFragment_CardEffects() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_CardEffects_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_CardEffects_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESCardFragment_CardEffects, UESCardFragment_CardEffects::StaticClass, TEXT("UESCardFragment_CardEffects"), &Z_Registration_Info_UClass_UESCardFragment_CardEffects, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESCardFragment_CardEffects), 2142315448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_CardEffects_h_1412550407(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_CardEffects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_CardEffects_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
