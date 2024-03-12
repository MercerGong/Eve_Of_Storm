// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Grid/ESGridHelper.h"
#include "EveOfTheStorm/Public/Core/Grid/ESBuildingSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESGridHelper() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESGridHelper();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESGridHelper_NoRegister();
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EGridDirection();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingData();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	DEFINE_FUNCTION(UESGridHelper::execCanProduceFood)
	{
		P_GET_STRUCT_REF(FBuildingData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UESGridHelper::CanProduceFood(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGridHelper::execCalculateCenter)
	{
		P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_Shape);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=UESGridHelper::CalculateCenter(Z_Param_Out_Shape);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESGridHelper::execRotateShape)
	{
		P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_Shape);
		P_GET_ENUM(EGridDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FIntPoint>*)Z_Param__Result=UESGridHelper::RotateShape(Z_Param_Out_Shape,EGridDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	void UESGridHelper::StaticRegisterNativesUESGridHelper()
	{
		UClass* Class = UESGridHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateCenter", &UESGridHelper::execCalculateCenter },
			{ "CanProduceFood", &UESGridHelper::execCanProduceFood },
			{ "RotateShape", &UESGridHelper::execRotateShape },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics
	{
		struct ESGridHelper_eventCalculateCenter_Parms
		{
			TArray<FIntPoint> Shape;
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shape_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Shape;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::NewProp_Shape_Inner = { "Shape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::NewProp_Shape_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridHelper_eventCalculateCenter_Parms, Shape), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::NewProp_Shape_MetaData), Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::NewProp_Shape_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridHelper_eventCalculateCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::NewProp_Shape_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridHelper, nullptr, "CalculateCenter", nullptr, nullptr, Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::ESGridHelper_eventCalculateCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::ESGridHelper_eventCalculateCenter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridHelper_CalculateCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridHelper_CalculateCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics
	{
		struct ESGridHelper_eventCanProduceFood_Parms
		{
			FBuildingData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridHelper_eventCanProduceFood_Parms, Data), Z_Construct_UScriptStruct_FBuildingData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::NewProp_Data_MetaData) }; // 669079497
	void Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESGridHelper_eventCanProduceFood_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESGridHelper_eventCanProduceFood_Parms), &Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridHelper, nullptr, "CanProduceFood", nullptr, nullptr, Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::ESGridHelper_eventCanProduceFood_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::ESGridHelper_eventCanProduceFood_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridHelper_CanProduceFood()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridHelper_CanProduceFood_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESGridHelper_RotateShape_Statics
	{
		struct ESGridHelper_eventRotateShape_Parms
		{
			TArray<FIntPoint> Shape;
			EGridDirection Direction;
			TArray<FIntPoint> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shape_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Shape;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::NewProp_Shape_Inner = { "Shape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::NewProp_Shape_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridHelper_eventRotateShape_Parms, Shape), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::NewProp_Shape_MetaData), Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::NewProp_Shape_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridHelper_eventRotateShape_Parms, Direction), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(0, nullptr) }; // 3444209995
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESGridHelper_eventRotateShape_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::NewProp_Shape_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESGridHelper, nullptr, "RotateShape", nullptr, nullptr, Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::ESGridHelper_eventRotateShape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::ESGridHelper_eventRotateShape_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESGridHelper_RotateShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESGridHelper_RotateShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESGridHelper);
	UClass* Z_Construct_UClass_UESGridHelper_NoRegister()
	{
		return UESGridHelper::StaticClass();
	}
	struct Z_Construct_UClass_UESGridHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESGridHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESGridHelper_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UESGridHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UESGridHelper_CalculateCenter, "CalculateCenter" }, // 26172300
		{ &Z_Construct_UFunction_UESGridHelper_CanProduceFood, "CanProduceFood" }, // 2368178853
		{ &Z_Construct_UFunction_UESGridHelper_RotateShape, "RotateShape" }, // 1959649645
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESGridHelper_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESGridHelper_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Grid/ESGridHelper.h" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESGridHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESGridHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESGridHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESGridHelper_Statics::ClassParams = {
		&UESGridHelper::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESGridHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UESGridHelper_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UESGridHelper()
	{
		if (!Z_Registration_Info_UClass_UESGridHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESGridHelper.OuterSingleton, Z_Construct_UClass_UESGridHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESGridHelper.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESGridHelper>()
	{
		return UESGridHelper::StaticClass();
	}
	UESGridHelper::UESGridHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESGridHelper);
	UESGridHelper::~UESGridHelper() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESGridHelper, UESGridHelper::StaticClass, TEXT("UESGridHelper"), &Z_Registration_Info_UClass_UESGridHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESGridHelper), 3080047402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_1838984908(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESGridHelper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
