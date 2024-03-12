// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Game/ESResourceSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESResourceSystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESResourceSystem();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESResourceSystem_NoRegister();
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EResourceType();
	EVEOFTHESTORM_API UFunction* Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FResourceDefinition();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FResourceModifier();
	MODULARCARDSYSTEM_API UEnum* Z_Construct_UEnum_ModularCardSystem_ECardModOp();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics
	{
		struct _Script_EveOfTheStorm_eventOnResourceChangeEvent_Parms
		{
			EResourceType type;
			float NewValue;
			float OldValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EveOfTheStorm_eventOnResourceChangeEvent_Parms, type), Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3645876735
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EveOfTheStorm_eventOnResourceChangeEvent_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EveOfTheStorm_eventOnResourceChangeEvent_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EveOfTheStorm, nullptr, "OnResourceChangeEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::_Script_EveOfTheStorm_eventOnResourceChangeEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::_Script_EveOfTheStorm_eventOnResourceChangeEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnResourceChangeEvent_DelegateWrapper(const FMulticastScriptDelegate& OnResourceChangeEvent, EResourceType type, float NewValue, float OldValue)
{
	struct _Script_EveOfTheStorm_eventOnResourceChangeEvent_Parms
	{
		EResourceType type;
		float NewValue;
		float OldValue;
	};
	_Script_EveOfTheStorm_eventOnResourceChangeEvent_Parms Parms;
	Parms.type=type;
	Parms.NewValue=NewValue;
	Parms.OldValue=OldValue;
	OnResourceChangeEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ResourceDefinition;
class UScriptStruct* FResourceDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ResourceDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ResourceDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResourceDefinition, (UObject*)Z_Construct_UPackage__Script_EveOfTheStorm(), TEXT("ResourceDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ResourceDefinition.OuterSingleton;
}
template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<FResourceDefinition>()
{
	return FResourceDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FResourceDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCapacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResourceDefinition>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ResourceDefinition" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResourceDefinition, Type), Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_Type_MetaData) }; // 3645876735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "ResourceDefinition" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResourceDefinition, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_MaxCapacity_MetaData[] = {
		{ "Category", "ResourceDefinition" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_MaxCapacity = { "MaxCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResourceDefinition, MaxCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_MaxCapacity_MetaData), Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_MaxCapacity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResourceDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewProp_MaxCapacity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResourceDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
		nullptr,
		&NewStructOps,
		"ResourceDefinition",
		Z_Construct_UScriptStruct_FResourceDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceDefinition_Statics::PropPointers),
		sizeof(FResourceDefinition),
		alignof(FResourceDefinition),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FResourceDefinition_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceDefinition_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FResourceDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_ResourceDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ResourceDefinition.InnerSingleton, Z_Construct_UScriptStruct_FResourceDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ResourceDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ResourceModifier;
class UScriptStruct* FResourceModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ResourceModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ResourceModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResourceModifier, (UObject*)Z_Construct_UPackage__Script_EveOfTheStorm(), TEXT("ResourceModifier"));
	}
	return Z_Registration_Info_UScriptStruct_ResourceModifier.OuterSingleton;
}
template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<FResourceModifier>()
{
	return FResourceModifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FResourceModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierOp_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModifierOp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResourceModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResourceModifier>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ResourceModifier" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResourceModifier, Type), Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_Type_MetaData) }; // 3645876735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_ModifierOp_MetaData[] = {
		{ "Category", "Card Attribute Data" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_ModifierOp = { "ModifierOp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResourceModifier, ModifierOp), Z_Construct_UEnum_ModularCardSystem_ECardModOp, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_ModifierOp_MetaData), Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_ModifierOp_MetaData) }; // 283696021
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "ResourceModifier" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResourceModifier, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_Amount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResourceModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_ModifierOp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResourceModifier_Statics::NewProp_Amount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResourceModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
		nullptr,
		&NewStructOps,
		"ResourceModifier",
		Z_Construct_UScriptStruct_FResourceModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceModifier_Statics::PropPointers),
		sizeof(FResourceModifier),
		alignof(FResourceModifier),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FResourceModifier_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResourceModifier_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FResourceModifier()
	{
		if (!Z_Registration_Info_UScriptStruct_ResourceModifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ResourceModifier.InnerSingleton, Z_Construct_UScriptStruct_FResourceModifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ResourceModifier.InnerSingleton;
	}
	DEFINE_FUNCTION(UESResourceSystem::execApplyModifier)
	{
		P_GET_STRUCT(FResourceModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ApplyModifier(Z_Param_Modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESResourceSystem::execValidResource)
	{
		P_GET_ENUM(EResourceType,Z_Param_ResourceType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ValidResource(EResourceType(Z_Param_ResourceType),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESResourceSystem::execSetMaxResourceValue)
	{
		P_GET_ENUM(EResourceType,Z_Param_ResourceType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->SetMaxResourceValue(EResourceType(Z_Param_ResourceType),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESResourceSystem::execGetMaxResourceValue)
	{
		P_GET_ENUM(EResourceType,Z_Param_ResourceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxResourceValue(EResourceType(Z_Param_ResourceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESResourceSystem::execHasEnoughResource)
	{
		P_GET_ENUM(EResourceType,Z_Param_ResourceType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasEnoughResource(EResourceType(Z_Param_ResourceType),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESResourceSystem::execSubtractResourceValue)
	{
		P_GET_ENUM(EResourceType,Z_Param_ResourceType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->SubtractResourceValue(EResourceType(Z_Param_ResourceType),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESResourceSystem::execAddResourceValue)
	{
		P_GET_ENUM(EResourceType,Z_Param_ResourceType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->AddResourceValue(EResourceType(Z_Param_ResourceType),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESResourceSystem::execSetResourceValue)
	{
		P_GET_ENUM(EResourceType,Z_Param_ResourceType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResourceValue(EResourceType(Z_Param_ResourceType),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESResourceSystem::execGetResourceValue)
	{
		P_GET_ENUM(EResourceType,Z_Param_ResourceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetResourceValue(EResourceType(Z_Param_ResourceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESResourceSystem::execInit)
	{
		P_GET_TARRAY_REF(FResourceDefinition,Z_Param_Out_ResourceDefinitions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_Out_ResourceDefinitions);
		P_NATIVE_END;
	}
	void UESResourceSystem::StaticRegisterNativesUESResourceSystem()
	{
		UClass* Class = UESResourceSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddResourceValue", &UESResourceSystem::execAddResourceValue },
			{ "ApplyModifier", &UESResourceSystem::execApplyModifier },
			{ "GetMaxResourceValue", &UESResourceSystem::execGetMaxResourceValue },
			{ "GetResourceValue", &UESResourceSystem::execGetResourceValue },
			{ "HasEnoughResource", &UESResourceSystem::execHasEnoughResource },
			{ "Init", &UESResourceSystem::execInit },
			{ "SetMaxResourceValue", &UESResourceSystem::execSetMaxResourceValue },
			{ "SetResourceValue", &UESResourceSystem::execSetResourceValue },
			{ "SubtractResourceValue", &UESResourceSystem::execSubtractResourceValue },
			{ "ValidResource", &UESResourceSystem::execValidResource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics
	{
		struct ESResourceSystem_eventAddResourceValue_Parms
		{
			EResourceType ResourceType;
			float Value;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventAddResourceValue_Parms, ResourceType), Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3645876735
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventAddResourceValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventAddResourceValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::NewProp_ResourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|ResourceSystem" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESResourceSystem, nullptr, "AddResourceValue", nullptr, nullptr, Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::ESResourceSystem_eventAddResourceValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::ESResourceSystem_eventAddResourceValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESResourceSystem_AddResourceValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESResourceSystem_AddResourceValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESResourceSystem_ApplyModifier_Statics
	{
		struct ESResourceSystem_eventApplyModifier_Parms
		{
			FResourceModifier Modifier;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESResourceSystem_ApplyModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventApplyModifier_Parms, Modifier), Z_Construct_UScriptStruct_FResourceModifier, METADATA_PARAMS(0, nullptr) }; // 3314774621
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESResourceSystem_ApplyModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventApplyModifier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESResourceSystem_ApplyModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_ApplyModifier_Statics::NewProp_Modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_ApplyModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESResourceSystem_ApplyModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|ResourceSystem" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESResourceSystem_ApplyModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESResourceSystem, nullptr, "ApplyModifier", nullptr, nullptr, Z_Construct_UFunction_UESResourceSystem_ApplyModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_ApplyModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESResourceSystem_ApplyModifier_Statics::ESResourceSystem_eventApplyModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_ApplyModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESResourceSystem_ApplyModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_ApplyModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESResourceSystem_ApplyModifier_Statics::ESResourceSystem_eventApplyModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESResourceSystem_ApplyModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESResourceSystem_ApplyModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics
	{
		struct ESResourceSystem_eventGetMaxResourceValue_Parms
		{
			EResourceType ResourceType;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventGetMaxResourceValue_Parms, ResourceType), Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3645876735
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventGetMaxResourceValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::NewProp_ResourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|ResourceSystem" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESResourceSystem, nullptr, "GetMaxResourceValue", nullptr, nullptr, Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::ESResourceSystem_eventGetMaxResourceValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::ESResourceSystem_eventGetMaxResourceValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics
	{
		struct ESResourceSystem_eventGetResourceValue_Parms
		{
			EResourceType ResourceType;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventGetResourceValue_Parms, ResourceType), Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3645876735
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventGetResourceValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::NewProp_ResourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|ResourceSystem" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESResourceSystem, nullptr, "GetResourceValue", nullptr, nullptr, Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::ESResourceSystem_eventGetResourceValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::ESResourceSystem_eventGetResourceValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESResourceSystem_GetResourceValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESResourceSystem_GetResourceValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics
	{
		struct ESResourceSystem_eventHasEnoughResource_Parms
		{
			EResourceType ResourceType;
			float Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventHasEnoughResource_Parms, ResourceType), Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3645876735
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventHasEnoughResource_Parms, Value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESResourceSystem_eventHasEnoughResource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESResourceSystem_eventHasEnoughResource_Parms), &Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::NewProp_ResourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|ResourceSystem" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESResourceSystem, nullptr, "HasEnoughResource", nullptr, nullptr, Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::ESResourceSystem_eventHasEnoughResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::ESResourceSystem_eventHasEnoughResource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESResourceSystem_HasEnoughResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESResourceSystem_HasEnoughResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESResourceSystem_Init_Statics
	{
		struct ESResourceSystem_eventInit_Parms
		{
			TArray<FResourceDefinition> ResourceDefinitions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResourceDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResourceDefinitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESResourceSystem_Init_Statics::NewProp_ResourceDefinitions_Inner = { "ResourceDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FResourceDefinition, METADATA_PARAMS(0, nullptr) }; // 2484151747
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESResourceSystem_Init_Statics::NewProp_ResourceDefinitions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UESResourceSystem_Init_Statics::NewProp_ResourceDefinitions = { "ResourceDefinitions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventInit_Parms, ResourceDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_Init_Statics::NewProp_ResourceDefinitions_MetaData), Z_Construct_UFunction_UESResourceSystem_Init_Statics::NewProp_ResourceDefinitions_MetaData) }; // 2484151747
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESResourceSystem_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_Init_Statics::NewProp_ResourceDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_Init_Statics::NewProp_ResourceDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESResourceSystem_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|ResourceSystem" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESResourceSystem_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESResourceSystem, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_UESResourceSystem_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESResourceSystem_Init_Statics::ESResourceSystem_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESResourceSystem_Init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_Init_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESResourceSystem_Init_Statics::ESResourceSystem_eventInit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESResourceSystem_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESResourceSystem_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics
	{
		struct ESResourceSystem_eventSetMaxResourceValue_Parms
		{
			EResourceType ResourceType;
			float Value;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventSetMaxResourceValue_Parms, ResourceType), Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3645876735
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventSetMaxResourceValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventSetMaxResourceValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::NewProp_ResourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|ResourceSystem" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESResourceSystem, nullptr, "SetMaxResourceValue", nullptr, nullptr, Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::ESResourceSystem_eventSetMaxResourceValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::ESResourceSystem_eventSetMaxResourceValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics
	{
		struct ESResourceSystem_eventSetResourceValue_Parms
		{
			EResourceType ResourceType;
			float Value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventSetResourceValue_Parms, ResourceType), Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3645876735
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventSetResourceValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::NewProp_ResourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|ResourceSystem" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESResourceSystem, nullptr, "SetResourceValue", nullptr, nullptr, Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::ESResourceSystem_eventSetResourceValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::ESResourceSystem_eventSetResourceValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESResourceSystem_SetResourceValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESResourceSystem_SetResourceValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics
	{
		struct ESResourceSystem_eventSubtractResourceValue_Parms
		{
			EResourceType ResourceType;
			float Value;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventSubtractResourceValue_Parms, ResourceType), Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3645876735
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventSubtractResourceValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventSubtractResourceValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::NewProp_ResourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|ResourceSystem" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESResourceSystem, nullptr, "SubtractResourceValue", nullptr, nullptr, Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::ESResourceSystem_eventSubtractResourceValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::ESResourceSystem_eventSubtractResourceValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics
	{
		struct ESResourceSystem_eventValidResource_Parms
		{
			EResourceType ResourceType;
			float Value;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventValidResource_Parms, ResourceType), Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3645876735
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventValidResource_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESResourceSystem_eventValidResource_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::NewProp_ResourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|ResourceSystem" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESResourceSystem, nullptr, "ValidResource", nullptr, nullptr, Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::ESResourceSystem_eventValidResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::ESResourceSystem_eventValidResource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESResourceSystem_ValidResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESResourceSystem_ValidResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESResourceSystem);
	UClass* Z_Construct_UClass_UESResourceSystem_NoRegister()
	{
		return UESResourceSystem::StaticClass();
	}
	struct Z_Construct_UClass_UESResourceSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnResourceChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResourceChange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResourceMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ResourceMap;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResourceMaxMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceMaxMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceMaxMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceMaxMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ResourceMaxMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESResourceSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESResourceSystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UESResourceSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UESResourceSystem_AddResourceValue, "AddResourceValue" }, // 3087595983
		{ &Z_Construct_UFunction_UESResourceSystem_ApplyModifier, "ApplyModifier" }, // 4249072691
		{ &Z_Construct_UFunction_UESResourceSystem_GetMaxResourceValue, "GetMaxResourceValue" }, // 3699287871
		{ &Z_Construct_UFunction_UESResourceSystem_GetResourceValue, "GetResourceValue" }, // 3108564560
		{ &Z_Construct_UFunction_UESResourceSystem_HasEnoughResource, "HasEnoughResource" }, // 3214182401
		{ &Z_Construct_UFunction_UESResourceSystem_Init, "Init" }, // 4095884746
		{ &Z_Construct_UFunction_UESResourceSystem_SetMaxResourceValue, "SetMaxResourceValue" }, // 1051580055
		{ &Z_Construct_UFunction_UESResourceSystem_SetResourceValue, "SetResourceValue" }, // 2518331626
		{ &Z_Construct_UFunction_UESResourceSystem_SubtractResourceValue, "SubtractResourceValue" }, // 2691573229
		{ &Z_Construct_UFunction_UESResourceSystem_ValidResource, "ValidResource" }, // 1232659733
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESResourceSystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESResourceSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Game/ESResourceSystem.h" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESResourceSystem_Statics::NewProp_OnResourceChange_MetaData[] = {
		{ "Category", "ES|ResourceSystem" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UESResourceSystem_Statics::NewProp_OnResourceChange = { "OnResourceChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESResourceSystem, OnResourceChange), Z_Construct_UDelegateFunction_EveOfTheStorm_OnResourceChangeEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESResourceSystem_Statics::NewProp_OnResourceChange_MetaData), Z_Construct_UClass_UESResourceSystem_Statics::NewProp_OnResourceChange_MetaData) }; // 866520237
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMap_ValueProp = { "ResourceMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMap_Key_KeyProp = { "ResourceMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3645876735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMap_MetaData[] = {
		{ "Category", "ES|ResourceSystem" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMap = { "ResourceMap", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESResourceSystem, ResourceMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMap_MetaData), Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMap_MetaData) }; // 3645876735
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMaxMap_ValueProp = { "ResourceMaxMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMaxMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMaxMap_Key_KeyProp = { "ResourceMaxMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(0, nullptr) }; // 3645876735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMaxMap_MetaData[] = {
		{ "Category", "ES|ResourceSystem" },
		{ "ModuleRelativePath", "Public/Core/Game/ESResourceSystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMaxMap = { "ResourceMaxMap", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESResourceSystem, ResourceMaxMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMaxMap_MetaData), Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMaxMap_MetaData) }; // 3645876735
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UESResourceSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESResourceSystem_Statics::NewProp_OnResourceChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMaxMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMaxMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMaxMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESResourceSystem_Statics::NewProp_ResourceMaxMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESResourceSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESResourceSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESResourceSystem_Statics::ClassParams = {
		&UESResourceSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UESResourceSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UESResourceSystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESResourceSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UESResourceSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESResourceSystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UESResourceSystem()
	{
		if (!Z_Registration_Info_UClass_UESResourceSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESResourceSystem.OuterSingleton, Z_Construct_UClass_UESResourceSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESResourceSystem.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESResourceSystem>()
	{
		return UESResourceSystem::StaticClass();
	}
	UESResourceSystem::UESResourceSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESResourceSystem);
	UESResourceSystem::~UESResourceSystem() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_Statics::ScriptStructInfo[] = {
		{ FResourceDefinition::StaticStruct, Z_Construct_UScriptStruct_FResourceDefinition_Statics::NewStructOps, TEXT("ResourceDefinition"), &Z_Registration_Info_UScriptStruct_ResourceDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResourceDefinition), 2484151747U) },
		{ FResourceModifier::StaticStruct, Z_Construct_UScriptStruct_FResourceModifier_Statics::NewStructOps, TEXT("ResourceModifier"), &Z_Registration_Info_UScriptStruct_ResourceModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResourceModifier), 3314774621U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESResourceSystem, UESResourceSystem::StaticClass, TEXT("UESResourceSystem"), &Z_Registration_Info_UClass_UESResourceSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESResourceSystem), 475942943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_2360855447(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Game_ESResourceSystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
