// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Definition/ESCardFragment_CardDropping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESCardFragment_CardDropping() {}
// Cross Module References
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardFragment_CardDropping();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardFragment_CardDropping_NoRegister();
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EResourceType();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UCardFragment();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	void UESCardFragment_CardDropping::StaticRegisterNativesUESCardFragment_CardDropping()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESCardFragment_CardDropping);
	UClass* Z_Construct_UClass_UESCardFragment_CardDropping_NoRegister()
	{
		return UESCardFragment_CardDropping::StaticClass();
	}
	struct Z_Construct_UClass_UESCardFragment_CardDropping_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Period;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResourceAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESCardFragment_CardDropping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCardFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardDropping_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_CardDropping_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Definition/ESCardFragment_CardDropping.h" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_CardDropping.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_CardDropping.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESCardFragment_CardDropping, Period), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_Period_MetaData), Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_Period_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_ResourceType_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_CardDropping.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESCardFragment_CardDropping, ResourceType), Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_ResourceType_MetaData), Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_ResourceType_MetaData) }; // 3645876735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_ResourceAmount_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_CardDropping.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_ResourceAmount = { "ResourceAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESCardFragment_CardDropping, ResourceAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_ResourceAmount_MetaData), Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_ResourceAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UESCardFragment_CardDropping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_Period,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_ResourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESCardFragment_CardDropping_Statics::NewProp_ResourceAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESCardFragment_CardDropping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESCardFragment_CardDropping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESCardFragment_CardDropping_Statics::ClassParams = {
		&UESCardFragment_CardDropping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UESCardFragment_CardDropping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardDropping_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardDropping_Statics::Class_MetaDataParams), Z_Construct_UClass_UESCardFragment_CardDropping_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_CardDropping_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UESCardFragment_CardDropping()
	{
		if (!Z_Registration_Info_UClass_UESCardFragment_CardDropping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESCardFragment_CardDropping.OuterSingleton, Z_Construct_UClass_UESCardFragment_CardDropping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESCardFragment_CardDropping.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESCardFragment_CardDropping>()
	{
		return UESCardFragment_CardDropping::StaticClass();
	}
	UESCardFragment_CardDropping::UESCardFragment_CardDropping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESCardFragment_CardDropping);
	UESCardFragment_CardDropping::~UESCardFragment_CardDropping() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_CardDropping_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_CardDropping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESCardFragment_CardDropping, UESCardFragment_CardDropping::StaticClass, TEXT("UESCardFragment_CardDropping"), &Z_Registration_Info_UClass_UESCardFragment_CardDropping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESCardFragment_CardDropping), 1639324673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_CardDropping_h_282361735(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_CardDropping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_CardDropping_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
