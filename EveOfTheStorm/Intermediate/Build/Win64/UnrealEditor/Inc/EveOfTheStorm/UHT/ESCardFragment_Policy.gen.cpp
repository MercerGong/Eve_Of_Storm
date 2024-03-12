// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Definition/ESCardFragment_Policy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESCardFragment_Policy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardFragment_Policy();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESCardFragment_Policy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	DEFINE_FUNCTION(UESCardFragment_Policy::execCheckRequirement)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckRequirement(Z_Param_PC);
		P_NATIVE_END;
	}
	struct ESCardFragment_Policy_eventK2_CheckRequirement_Parms
	{
		APlayerController* PC;
		bool Result;
	};
	static FName NAME_UESCardFragment_Policy_K2_CheckRequirement = FName(TEXT("K2_CheckRequirement"));
	void UESCardFragment_Policy::K2_CheckRequirement(APlayerController* PC, bool& Result)
	{
		ESCardFragment_Policy_eventK2_CheckRequirement_Parms Parms;
		Parms.PC=PC;
		Parms.Result=Result ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UESCardFragment_Policy_K2_CheckRequirement),&Parms);
		Result=Parms.Result;
	}
	void UESCardFragment_Policy::StaticRegisterNativesUESCardFragment_Policy()
	{
		UClass* Class = UESCardFragment_Policy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckRequirement", &UESCardFragment_Policy::execCheckRequirement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics
	{
		struct ESCardFragment_Policy_eventCheckRequirement_Parms
		{
			APlayerController* PC;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardFragment_Policy_eventCheckRequirement_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESCardFragment_Policy_eventCheckRequirement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESCardFragment_Policy_eventCheckRequirement_Parms), &Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::NewProp_PC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_Policy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardFragment_Policy, nullptr, "CheckRequirement", nullptr, nullptr, Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::ESCardFragment_Policy_eventCheckRequirement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::ESCardFragment_Policy_eventCheckRequirement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESCardFragment_Policy_eventK2_CheckRequirement_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((ESCardFragment_Policy_eventK2_CheckRequirement_Parms*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESCardFragment_Policy_eventK2_CheckRequirement_Parms), &Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement_Statics::NewProp_PC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_Policy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESCardFragment_Policy, nullptr, "K2_CheckRequirement", nullptr, nullptr, Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement_Statics::PropPointers), sizeof(ESCardFragment_Policy_eventK2_CheckRequirement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement_Statics::PropPointers) < 2048);
	static_assert(sizeof(ESCardFragment_Policy_eventK2_CheckRequirement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESCardFragment_Policy);
	UClass* Z_Construct_UClass_UESCardFragment_Policy_NoRegister()
	{
		return UESCardFragment_Policy::StaticClass();
	}
	struct Z_Construct_UClass_UESCardFragment_Policy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESCardFragment_Policy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_Policy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UESCardFragment_Policy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UESCardFragment_Policy_CheckRequirement, "CheckRequirement" }, // 2271004788
		{ &Z_Construct_UFunction_UESCardFragment_Policy_K2_CheckRequirement, "K2_CheckRequirement" }, // 2507185027
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_Policy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESCardFragment_Policy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Definition/ESCardFragment_Policy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Definition/ESCardFragment_Policy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESCardFragment_Policy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESCardFragment_Policy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESCardFragment_Policy_Statics::ClassParams = {
		&UESCardFragment_Policy::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESCardFragment_Policy_Statics::Class_MetaDataParams), Z_Construct_UClass_UESCardFragment_Policy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UESCardFragment_Policy()
	{
		if (!Z_Registration_Info_UClass_UESCardFragment_Policy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESCardFragment_Policy.OuterSingleton, Z_Construct_UClass_UESCardFragment_Policy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESCardFragment_Policy.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESCardFragment_Policy>()
	{
		return UESCardFragment_Policy::StaticClass();
	}
	UESCardFragment_Policy::UESCardFragment_Policy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESCardFragment_Policy);
	UESCardFragment_Policy::~UESCardFragment_Policy() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_Policy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_Policy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESCardFragment_Policy, UESCardFragment_Policy::StaticClass, TEXT("UESCardFragment_Policy"), &Z_Registration_Info_UClass_UESCardFragment_Policy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESCardFragment_Policy), 1951340920U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_Policy_h_1532387050(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_Policy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Definition_ESCardFragment_Policy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
