// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularCardSystem/Public/MCSGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMCSGameInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_AMCSCard_NoRegister();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UCardPackAsset_NoRegister();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UMCSCardWidget_NoRegister();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UMCSGameInstance();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UMCSGameInstance_NoRegister();
	MODULARCARDSYSTEM_API UEnum* Z_Construct_UEnum_ModularCardSystem_ECardRarity();
	UPackage* Z_Construct_UPackage__Script_ModularCardSystem();
// End Cross Module References
	void UMCSGameInstance::StaticRegisterNativesUMCSGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMCSGameInstance);
	UClass* Z_Construct_UClass_UMCSGameInstance_NoRegister()
	{
		return UMCSGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMCSGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CardWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CardActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardPacks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardPacks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CardPacks;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualPacks_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VisualPacks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualPacks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_VisualPacks;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardRarityWeights_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CardRarityWeights_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CardRarityWeights_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardRarityWeights_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CardRarityWeights;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardTypeWeights_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CardTypeWeights_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardTypeWeights_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CardTypeWeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCardLock_MetaData[];
#endif
		static void NewProp_bEnableCardLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCardLock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMCSGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularCardSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSGameInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSGameInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MCSGameInstance.h" },
		{ "ModuleRelativePath", "Public/MCSGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardWidget_MetaData[] = {
		{ "Category", "Cards" },
		{ "ModuleRelativePath", "Public/MCSGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardWidget = { "CardWidget", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSGameInstance, CardWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UMCSCardWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardWidget_MetaData), Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardActor_MetaData[] = {
		{ "Category", "Cards" },
		{ "ModuleRelativePath", "Public/MCSGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardActor = { "CardActor", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSGameInstance, CardActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AMCSCard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardActor_MetaData), Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardActor_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardPacks_Inner = { "CardPacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCardPackAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardPacks_MetaData[] = {
		{ "Category", "Cards" },
		{ "ModuleRelativePath", "Public/MCSGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardPacks = { "CardPacks", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSGameInstance, CardPacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardPacks_MetaData), Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardPacks_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_VisualPacks_ValueProp = { "VisualPacks", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_VisualPacks_Key_KeyProp = { "VisualPacks_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_VisualPacks_MetaData[] = {
		{ "Category", "Cards" },
		{ "ModuleRelativePath", "Public/MCSGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_VisualPacks = { "VisualPacks", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSGameInstance, VisualPacks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_VisualPacks_MetaData), Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_VisualPacks_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardRarityWeights_ValueProp = { "CardRarityWeights", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardRarityWeights_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardRarityWeights_Key_KeyProp = { "CardRarityWeights_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_ModularCardSystem_ECardRarity, METADATA_PARAMS(0, nullptr) }; // 3661568023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardRarityWeights_MetaData[] = {
		{ "Category", "Cards" },
		{ "ModuleRelativePath", "Public/MCSGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardRarityWeights = { "CardRarityWeights", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSGameInstance, CardRarityWeights), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardRarityWeights_MetaData), Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardRarityWeights_MetaData) }; // 3661568023
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardTypeWeights_ValueProp = { "CardTypeWeights", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardTypeWeights_Key_KeyProp = { "CardTypeWeights_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardTypeWeights_MetaData[] = {
		{ "Category", "Cards" },
		{ "ModuleRelativePath", "Public/MCSGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardTypeWeights = { "CardTypeWeights", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMCSGameInstance, CardTypeWeights), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardTypeWeights_MetaData), Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardTypeWeights_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_bEnableCardLock_MetaData[] = {
		{ "Category", "Cards" },
		{ "ModuleRelativePath", "Public/MCSGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_bEnableCardLock_SetBit(void* Obj)
	{
		((UMCSGameInstance*)Obj)->bEnableCardLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_bEnableCardLock = { "bEnableCardLock", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMCSGameInstance), &Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_bEnableCardLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_bEnableCardLock_MetaData), Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_bEnableCardLock_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMCSGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardPacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardPacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_VisualPacks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_VisualPacks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_VisualPacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardRarityWeights_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardRarityWeights_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardRarityWeights_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardRarityWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardTypeWeights_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardTypeWeights_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_CardTypeWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCSGameInstance_Statics::NewProp_bEnableCardLock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMCSGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMCSGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMCSGameInstance_Statics::ClassParams = {
		&UMCSGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMCSGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMCSGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMCSGameInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMCSGameInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMCSGameInstance()
	{
		if (!Z_Registration_Info_UClass_UMCSGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMCSGameInstance.OuterSingleton, Z_Construct_UClass_UMCSGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMCSGameInstance.OuterSingleton;
	}
	template<> MODULARCARDSYSTEM_API UClass* StaticClass<UMCSGameInstance>()
	{
		return UMCSGameInstance::StaticClass();
	}
	UMCSGameInstance::UMCSGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMCSGameInstance);
	UMCSGameInstance::~UMCSGameInstance() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMCSGameInstance, UMCSGameInstance::StaticClass, TEXT("UMCSGameInstance"), &Z_Registration_Info_UClass_UMCSGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMCSGameInstance), 1089536770U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSGameInstance_h_490703589(TEXT("/Script/ModularCardSystem"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_MCSGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
