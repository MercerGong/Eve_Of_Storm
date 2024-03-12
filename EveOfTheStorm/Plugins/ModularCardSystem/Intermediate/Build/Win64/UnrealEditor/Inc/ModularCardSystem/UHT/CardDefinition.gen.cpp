// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularCardSystem/Public/Types/CardDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardDefinition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UCardDefinition();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UCardDefinition_NoRegister();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UCardFragment();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_UCardFragment_NoRegister();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_ULyraInventoryFunctionLibrary();
	MODULARCARDSYSTEM_API UClass* Z_Construct_UClass_ULyraInventoryFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModularCardSystem();
// End Cross Module References
	void UCardFragment::StaticRegisterNativesUCardFragment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCardFragment);
	UClass* Z_Construct_UClass_UCardFragment_NoRegister()
	{
		return UCardFragment::StaticClass();
	}
	struct Z_Construct_UClass_UCardFragment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCardFragment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularCardSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCardFragment_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardFragment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Represents a fragment of an item definition\n" },
#endif
		{ "IncludePath", "Types/CardDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Types/CardDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a fragment of an item definition" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCardFragment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCardFragment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCardFragment_Statics::ClassParams = {
		&UCardFragment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardFragment_Statics::Class_MetaDataParams), Z_Construct_UClass_UCardFragment_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCardFragment()
	{
		if (!Z_Registration_Info_UClass_UCardFragment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCardFragment.OuterSingleton, Z_Construct_UClass_UCardFragment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCardFragment.OuterSingleton;
	}
	template<> MODULARCARDSYSTEM_API UClass* StaticClass<UCardFragment>()
	{
		return UCardFragment::StaticClass();
	}
	UCardFragment::UCardFragment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCardFragment);
	UCardFragment::~UCardFragment() {}
	void UCardDefinition::StaticRegisterNativesUCardDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCardDefinition);
	UClass* Z_Construct_UClass_UCardDefinition_NoRegister()
	{
		return UCardDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UCardDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Fragments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Fragments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCardDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularCardSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCardDefinition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Types/CardDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Types/CardDefinition.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardDefinition_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/Types/CardDefinition.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCardDefinition_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardDefinition, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardDefinition_Statics::NewProp_DisplayName_MetaData), Z_Construct_UClass_UCardDefinition_Statics::NewProp_DisplayName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardDefinition_Statics::NewProp_Fragments_Inner_MetaData[] = {
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/CardDefinition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCardDefinition_Statics::NewProp_Fragments_Inner = { "Fragments", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCardFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardDefinition_Statics::NewProp_Fragments_Inner_MetaData), Z_Construct_UClass_UCardDefinition_Statics::NewProp_Fragments_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardDefinition_Statics::NewProp_Fragments_MetaData[] = {
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/CardDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCardDefinition_Statics::NewProp_Fragments = { "Fragments", nullptr, (EPropertyFlags)0x001400800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardDefinition, Fragments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardDefinition_Statics::NewProp_Fragments_MetaData), Z_Construct_UClass_UCardDefinition_Statics::NewProp_Fragments_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCardDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardDefinition_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardDefinition_Statics::NewProp_Fragments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardDefinition_Statics::NewProp_Fragments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCardDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCardDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCardDefinition_Statics::ClassParams = {
		&UCardDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCardDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCardDefinition_Statics::PropPointers),
		0,
		0x009100A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UCardDefinition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCardDefinition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCardDefinition()
	{
		if (!Z_Registration_Info_UClass_UCardDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCardDefinition.OuterSingleton, Z_Construct_UClass_UCardDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCardDefinition.OuterSingleton;
	}
	template<> MODULARCARDSYSTEM_API UClass* StaticClass<UCardDefinition>()
	{
		return UCardDefinition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCardDefinition);
	UCardDefinition::~UCardDefinition() {}
	DEFINE_FUNCTION(ULyraInventoryFunctionLibrary::execFindCardDefinitionFragment)
	{
		P_GET_OBJECT(UClass,Z_Param_ItemDef);
		P_GET_OBJECT(UClass,Z_Param_FragmentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UCardFragment**)Z_Param__Result=ULyraInventoryFunctionLibrary::FindCardDefinitionFragment(Z_Param_ItemDef,Z_Param_FragmentClass);
		P_NATIVE_END;
	}
	void ULyraInventoryFunctionLibrary::StaticRegisterNativesULyraInventoryFunctionLibrary()
	{
		UClass* Class = ULyraInventoryFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindCardDefinitionFragment", &ULyraInventoryFunctionLibrary::execFindCardDefinitionFragment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics
	{
		struct LyraInventoryFunctionLibrary_eventFindCardDefinitionFragment_Parms
		{
			TSubclassOf<UCardDefinition>  ItemDef;
			TSubclassOf<UCardFragment>  FragmentClass;
			const UCardFragment* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
		static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryFunctionLibrary_eventFindCardDefinitionFragment_Parms, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_UCardDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryFunctionLibrary_eventFindCardDefinitionFragment_Parms, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCardFragment_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryFunctionLibrary_eventFindCardDefinitionFragment_Parms, ReturnValue), Z_Construct_UClass_UCardFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::NewProp_ItemDef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::NewProp_FragmentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "FragmentClass" },
		{ "ModuleRelativePath", "Public/Types/CardDefinition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryFunctionLibrary, nullptr, "FindCardDefinitionFragment", nullptr, nullptr, Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::LyraInventoryFunctionLibrary_eventFindCardDefinitionFragment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::LyraInventoryFunctionLibrary_eventFindCardDefinitionFragment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInventoryFunctionLibrary);
	UClass* Z_Construct_UClass_ULyraInventoryFunctionLibrary_NoRegister()
	{
		return ULyraInventoryFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularCardSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindCardDefinitionFragment, "FindCardDefinitionFragment" }, // 3039175452
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@TODO: Make into a subsystem instead?\n" },
#endif
		{ "IncludePath", "Types/CardDefinition.h" },
		{ "ModuleRelativePath", "Public/Types/CardDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@TODO: Make into a subsystem instead?" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInventoryFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::ClassParams = {
		&ULyraInventoryFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULyraInventoryFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_ULyraInventoryFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInventoryFunctionLibrary.OuterSingleton, Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraInventoryFunctionLibrary.OuterSingleton;
	}
	template<> MODULARCARDSYSTEM_API UClass* StaticClass<ULyraInventoryFunctionLibrary>()
	{
		return ULyraInventoryFunctionLibrary::StaticClass();
	}
	ULyraInventoryFunctionLibrary::ULyraInventoryFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInventoryFunctionLibrary);
	ULyraInventoryFunctionLibrary::~ULyraInventoryFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_CardDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_CardDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCardFragment, UCardFragment::StaticClass, TEXT("UCardFragment"), &Z_Registration_Info_UClass_UCardFragment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCardFragment), 4065148100U) },
		{ Z_Construct_UClass_UCardDefinition, UCardDefinition::StaticClass, TEXT("UCardDefinition"), &Z_Registration_Info_UClass_UCardDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCardDefinition), 2388525826U) },
		{ Z_Construct_UClass_ULyraInventoryFunctionLibrary, ULyraInventoryFunctionLibrary::StaticClass, TEXT("ULyraInventoryFunctionLibrary"), &Z_Registration_Info_UClass_ULyraInventoryFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInventoryFunctionLibrary), 945018877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_CardDefinition_h_450362280(TEXT("/Script/ModularCardSystem"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_CardDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Plugins_ModularCardSystem_Source_ModularCardSystem_Public_Types_CardDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
