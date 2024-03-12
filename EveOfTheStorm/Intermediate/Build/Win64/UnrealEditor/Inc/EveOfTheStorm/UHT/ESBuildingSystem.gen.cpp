// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveOfTheStorm/Public/Core/Grid/ESBuildingSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBuildingSystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESBuildingSystem();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESBuildingSystem_NoRegister();
	EVEOFTHESTORM_API UClass* Z_Construct_UClass_UESGridSystem_NoRegister();
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EGridDirection();
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EGroundType();
	EVEOFTHESTORM_API UEnum* Z_Construct_UEnum_EveOfTheStorm_EResourceType();
	EVEOFTHESTORM_API UFunction* Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingData();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingInfo();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingInitData();
	EVEOFTHESTORM_API UScriptStruct* Z_Construct_UScriptStruct_FBuildRewardPeriod();
	UPackage* Z_Construct_UPackage__Script_EveOfTheStorm();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildRewardPeriod;
class UScriptStruct* FBuildRewardPeriod::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildRewardPeriod.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildRewardPeriod.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildRewardPeriod, (UObject*)Z_Construct_UPackage__Script_EveOfTheStorm(), TEXT("BuildRewardPeriod"));
	}
	return Z_Registration_Info_UScriptStruct_BuildRewardPeriod.OuterSingleton;
}
template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<FBuildRewardPeriod>()
{
	return FBuildRewardPeriod::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResourceAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildRewardPeriod>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildRewardPeriod, Period), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_Period_MetaData), Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_Period_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_ResourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_ResourceType_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_ResourceType = { "ResourceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildRewardPeriod, ResourceType), Z_Construct_UEnum_EveOfTheStorm_EResourceType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_ResourceType_MetaData), Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_ResourceType_MetaData) }; // 3645876735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_ResourceAmount_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_ResourceAmount = { "ResourceAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildRewardPeriod, ResourceAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_ResourceAmount_MetaData), Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_ResourceAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_Period,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_ResourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_ResourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewProp_ResourceAmount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
		nullptr,
		&NewStructOps,
		"BuildRewardPeriod",
		Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::PropPointers),
		sizeof(FBuildRewardPeriod),
		alignof(FBuildRewardPeriod),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBuildRewardPeriod()
	{
		if (!Z_Registration_Info_UScriptStruct_BuildRewardPeriod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildRewardPeriod.InnerSingleton, Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BuildRewardPeriod.InnerSingleton;
	}

static_assert(std::is_polymorphic<FBuildingData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBuildingData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildingData;
class UScriptStruct* FBuildingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildingData, (UObject*)Z_Construct_UPackage__Script_EveOfTheStorm(), TEXT("BuildingData"));
	}
	return Z_Registration_Info_UScriptStruct_BuildingData.OuterSingleton;
}
template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<FBuildingData>()
{
	return FBuildingData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBuildingData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Images_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Images_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Images;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Drops_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Drops_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Drops;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RequireGroundType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequireGroundType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RequireGroundType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildingTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shape_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Shape;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rewards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rewards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rewards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildingData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
		{ "MultiLine", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Description_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Images_Inner = { "Images", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Images_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingData, Images), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Images_MetaData), Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Images_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Drops_Inner = { "Drops", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Drops_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Drops = { "Drops", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingData, Drops), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Drops_MetaData), Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Drops_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_RequireGroundType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_RequireGroundType_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_RequireGroundType = { "RequireGroundType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingData, RequireGroundType), Z_Construct_UEnum_EveOfTheStorm_EGroundType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_RequireGroundType_MetaData), Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_RequireGroundType_MetaData) }; // 3897062157
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingTransform_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingTransform = { "BuildingTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingData, BuildingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingTransform_MetaData), Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingTransform_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Shape_Inner = { "Shape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingData, Shape), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Shape_MetaData), Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Shape_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Rewards_Inner = { "Rewards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuildRewardPeriod, METADATA_PARAMS(0, nullptr) }; // 1638628249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Rewards_MetaData[] = {
		{ "Category", "Building Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Building Data\")\n// TArray<FBuildPeriod> Periods;\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Building Data\")\nTArray<FBuildPeriod> Periods;" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Rewards = { "Rewards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingData, Rewards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Rewards_MetaData), Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Rewards_MetaData) }; // 1638628249
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildingData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Images_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Images,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Drops_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Drops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_RequireGroundType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_RequireGroundType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_BuildingTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Shape_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Rewards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingData_Statics::NewProp_Rewards,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BuildingData",
		Z_Construct_UScriptStruct_FBuildingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::PropPointers),
		sizeof(FBuildingData),
		alignof(FBuildingData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuildingData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBuildingData()
	{
		if (!Z_Registration_Info_UScriptStruct_BuildingData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildingData.InnerSingleton, Z_Construct_UScriptStruct_FBuildingData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BuildingData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildingInfo;
class UScriptStruct* FBuildingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildingInfo, (UObject*)Z_Construct_UPackage__Script_EveOfTheStorm(), TEXT("BuildingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BuildingInfo.OuterSingleton;
}
template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<FBuildingInfo>()
{
	return FBuildingInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBuildingInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartPeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Destroyed_MetaData[];
#endif
		static void NewProp_Destroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Destroyed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildingInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingInfo, Data), Z_Construct_UScriptStruct_FBuildingData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Data_MetaData) }; // 669079497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingInfo, Position), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Position_MetaData), Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_StartPeriod_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_StartPeriod = { "StartPeriod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingInfo, StartPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_StartPeriod_MetaData), Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_StartPeriod_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Destroyed_MetaData[] = {
		{ "Category", "Building Data" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Destroyed_SetBit(void* Obj)
	{
		((FBuildingInfo*)Obj)->Destroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Destroyed = { "Destroyed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBuildingInfo), &Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Destroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Destroyed_MetaData), Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Destroyed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildingInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_StartPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewProp_Destroyed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
		nullptr,
		&NewStructOps,
		"BuildingInfo",
		Z_Construct_UScriptStruct_FBuildingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingInfo_Statics::PropPointers),
		sizeof(FBuildingInfo),
		alignof(FBuildingInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuildingInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBuildingInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_BuildingInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildingInfo.InnerSingleton, Z_Construct_UScriptStruct_FBuildingInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BuildingInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildingInitData;
class UScriptStruct* FBuildingInitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildingInitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildingInitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildingInitData, (UObject*)Z_Construct_UPackage__Script_EveOfTheStorm(), TEXT("BuildingInitData"));
	}
	return Z_Registration_Info_UScriptStruct_BuildingInitData.OuterSingleton;
}
template<> EVEOFTHESTORM_API UScriptStruct* StaticStruct<FBuildingInitData>()
{
	return FBuildingInitData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBuildingInitData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingInitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildingInitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildingInitData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingInitData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "BuildingInitData" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildingInitData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingInitData, Data), Z_Construct_UScriptStruct_FBuildingData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingInitData_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FBuildingInitData_Statics::NewProp_Data_MetaData) }; // 669079497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildingInitData_Statics::NewProp_Pos_MetaData[] = {
		{ "Category", "BuildingInitData" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildingInitData_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingInitData, Pos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingInitData_Statics::NewProp_Pos_MetaData), Z_Construct_UScriptStruct_FBuildingInitData_Statics::NewProp_Pos_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildingInitData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingInitData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildingInitData_Statics::NewProp_Pos,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildingInitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
		nullptr,
		&NewStructOps,
		"BuildingInitData",
		Z_Construct_UScriptStruct_FBuildingInitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingInitData_Statics::PropPointers),
		sizeof(FBuildingInitData),
		alignof(FBuildingInitData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingInitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuildingInitData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildingInitData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBuildingInitData()
	{
		if (!Z_Registration_Info_UScriptStruct_BuildingInitData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildingInitData.InnerSingleton, Z_Construct_UScriptStruct_FBuildingInitData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BuildingInitData.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics
	{
		struct _Script_EveOfTheStorm_eventOnBuildingTriggerEvent_Parms
		{
			FBuildingData BuildinData;
			int32 EventCount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildinData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildinData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EventCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::NewProp_BuildinData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::NewProp_BuildinData = { "BuildinData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EveOfTheStorm_eventOnBuildingTriggerEvent_Parms, BuildinData), Z_Construct_UScriptStruct_FBuildingData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::NewProp_BuildinData_MetaData), Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::NewProp_BuildinData_MetaData) }; // 669079497
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::NewProp_EventCount = { "EventCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_EveOfTheStorm_eventOnBuildingTriggerEvent_Parms, EventCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::NewProp_BuildinData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::NewProp_EventCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EveOfTheStorm, nullptr, "OnBuildingTriggerEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::_Script_EveOfTheStorm_eventOnBuildingTriggerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::_Script_EveOfTheStorm_eventOnBuildingTriggerEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnBuildingTriggerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnBuildingTriggerEvent, FBuildingData const& BuildinData, int32 EventCount)
{
	struct _Script_EveOfTheStorm_eventOnBuildingTriggerEvent_Parms
	{
		FBuildingData BuildinData;
		int32 EventCount;
	};
	_Script_EveOfTheStorm_eventOnBuildingTriggerEvent_Parms Parms;
	Parms.BuildinData=BuildinData;
	Parms.EventCount=EventCount;
	OnBuildingTriggerEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UESBuildingSystem::execGetEstimateCost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEstimateCost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESBuildingSystem::execTickBuilding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickBuilding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESBuildingSystem::execCanPlaceBuilding)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_Pos);
		P_GET_STRUCT(FBuildingData,Z_Param_InBuildingData);
		P_GET_ENUM(EGridDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPlaceBuilding(Z_Param_Pos,Z_Param_InBuildingData,EGridDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESBuildingSystem::execHasBuilding)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_Pos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasBuilding(Z_Param_Pos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESBuildingSystem::execGetBuildingByPosition)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_Pos);
		P_GET_STRUCT_REF(FBuildingInfo,Z_Param_Out_BuildingInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBuildingByPosition(Z_Param_Pos,Z_Param_Out_BuildingInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESBuildingSystem::execGetBuildingByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_STRUCT_REF(FBuildingInfo,Z_Param_Out_BuildingInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBuildingByIndex(Z_Param_index,Z_Param_Out_BuildingInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESBuildingSystem::execDropBuildingByPosition)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_Pos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DropBuildingByPosition(Z_Param_Pos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESBuildingSystem::execDropBuilding)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DropBuilding(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESBuildingSystem::execPlaceBuilding)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_Position);
		P_GET_STRUCT(FBuildingData,Z_Param_InBuildingData);
		P_GET_ENUM(EGridDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlaceBuilding(Z_Param_Position,Z_Param_InBuildingData,EGridDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESBuildingSystem::execSetCurrentTick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InTick);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentTick(Z_Param_InTick);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESBuildingSystem::execPlaceInitialBuilding)
	{
		P_GET_TARRAY(FBuildingInitData,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaceInitialBuilding(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UESBuildingSystem::execInit)
	{
		P_GET_OBJECT(UESGridSystem,Z_Param_InGridSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_InGridSystem);
		P_NATIVE_END;
	}
	void UESBuildingSystem::StaticRegisterNativesUESBuildingSystem()
	{
		UClass* Class = UESBuildingSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanPlaceBuilding", &UESBuildingSystem::execCanPlaceBuilding },
			{ "DropBuilding", &UESBuildingSystem::execDropBuilding },
			{ "DropBuildingByPosition", &UESBuildingSystem::execDropBuildingByPosition },
			{ "GetBuildingByIndex", &UESBuildingSystem::execGetBuildingByIndex },
			{ "GetBuildingByPosition", &UESBuildingSystem::execGetBuildingByPosition },
			{ "GetEstimateCost", &UESBuildingSystem::execGetEstimateCost },
			{ "HasBuilding", &UESBuildingSystem::execHasBuilding },
			{ "Init", &UESBuildingSystem::execInit },
			{ "PlaceBuilding", &UESBuildingSystem::execPlaceBuilding },
			{ "PlaceInitialBuilding", &UESBuildingSystem::execPlaceInitialBuilding },
			{ "SetCurrentTick", &UESBuildingSystem::execSetCurrentTick },
			{ "TickBuilding", &UESBuildingSystem::execTickBuilding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics
	{
		struct ESBuildingSystem_eventCanPlaceBuilding_Parms
		{
			FIntPoint Pos;
			FBuildingData InBuildingData;
			EGridDirection Direction;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBuildingData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventCanPlaceBuilding_Parms, Pos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::NewProp_InBuildingData = { "InBuildingData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventCanPlaceBuilding_Parms, InBuildingData), Z_Construct_UScriptStruct_FBuildingData, METADATA_PARAMS(0, nullptr) }; // 669079497
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventCanPlaceBuilding_Parms, Direction), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(0, nullptr) }; // 3444209995
	void Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESBuildingSystem_eventCanPlaceBuilding_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESBuildingSystem_eventCanPlaceBuilding_Parms), &Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::NewProp_Pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::NewProp_InBuildingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Building" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESBuildingSystem, nullptr, "CanPlaceBuilding", nullptr, nullptr, Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::ESBuildingSystem_eventCanPlaceBuilding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::ESBuildingSystem_eventCanPlaceBuilding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics
	{
		struct ESBuildingSystem_eventDropBuilding_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventDropBuilding_Parms, index), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESBuildingSystem_eventDropBuilding_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESBuildingSystem_eventDropBuilding_Parms), &Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Building" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// bool PlaceBuilding(FIntPoint Position, FBuildingData InBuildingData);\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bool PlaceBuilding(FIntPoint Position, FBuildingData InBuildingData);" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESBuildingSystem, nullptr, "DropBuilding", nullptr, nullptr, Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::ESBuildingSystem_eventDropBuilding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::ESBuildingSystem_eventDropBuilding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESBuildingSystem_DropBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESBuildingSystem_DropBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics
	{
		struct ESBuildingSystem_eventDropBuildingByPosition_Parms
		{
			FIntPoint Pos;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventDropBuildingByPosition_Parms, Pos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESBuildingSystem_eventDropBuildingByPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESBuildingSystem_eventDropBuildingByPosition_Parms), &Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::NewProp_Pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Building" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESBuildingSystem, nullptr, "DropBuildingByPosition", nullptr, nullptr, Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::ESBuildingSystem_eventDropBuildingByPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::ESBuildingSystem_eventDropBuildingByPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics
	{
		struct ESBuildingSystem_eventGetBuildingByIndex_Parms
		{
			int32 index;
			FBuildingInfo BuildingInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildingInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventGetBuildingByIndex_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::NewProp_BuildingInfo = { "BuildingInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventGetBuildingByIndex_Parms, BuildingInfo), Z_Construct_UScriptStruct_FBuildingInfo, METADATA_PARAMS(0, nullptr) }; // 1786536396
	void Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESBuildingSystem_eventGetBuildingByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESBuildingSystem_eventGetBuildingByIndex_Parms), &Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::NewProp_BuildingInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Building" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESBuildingSystem, nullptr, "GetBuildingByIndex", nullptr, nullptr, Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::ESBuildingSystem_eventGetBuildingByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::ESBuildingSystem_eventGetBuildingByIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics
	{
		struct ESBuildingSystem_eventGetBuildingByPosition_Parms
		{
			FIntPoint Pos;
			FBuildingInfo BuildingInfo;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildingInfo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventGetBuildingByPosition_Parms, Pos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::NewProp_BuildingInfo = { "BuildingInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventGetBuildingByPosition_Parms, BuildingInfo), Z_Construct_UScriptStruct_FBuildingInfo, METADATA_PARAMS(0, nullptr) }; // 1786536396
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventGetBuildingByPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::NewProp_Pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::NewProp_BuildingInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Building" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESBuildingSystem, nullptr, "GetBuildingByPosition", nullptr, nullptr, Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::ESBuildingSystem_eventGetBuildingByPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::ESBuildingSystem_eventGetBuildingByPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESBuildingSystem_GetEstimateCost_Statics
	{
		struct ESBuildingSystem_eventGetEstimateCost_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UESBuildingSystem_GetEstimateCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventGetEstimateCost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESBuildingSystem_GetEstimateCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_GetEstimateCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESBuildingSystem_GetEstimateCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Building" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESBuildingSystem_GetEstimateCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESBuildingSystem, nullptr, "GetEstimateCost", nullptr, nullptr, Z_Construct_UFunction_UESBuildingSystem_GetEstimateCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_GetEstimateCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESBuildingSystem_GetEstimateCost_Statics::ESBuildingSystem_eventGetEstimateCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_GetEstimateCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESBuildingSystem_GetEstimateCost_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_GetEstimateCost_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESBuildingSystem_GetEstimateCost_Statics::ESBuildingSystem_eventGetEstimateCost_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESBuildingSystem_GetEstimateCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESBuildingSystem_GetEstimateCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics
	{
		struct ESBuildingSystem_eventHasBuilding_Parms
		{
			FIntPoint Pos;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventHasBuilding_Parms, Pos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESBuildingSystem_eventHasBuilding_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESBuildingSystem_eventHasBuilding_Parms), &Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::NewProp_Pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Building" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESBuildingSystem, nullptr, "HasBuilding", nullptr, nullptr, Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::ESBuildingSystem_eventHasBuilding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::ESBuildingSystem_eventHasBuilding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESBuildingSystem_HasBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESBuildingSystem_HasBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESBuildingSystem_Init_Statics
	{
		struct ESBuildingSystem_eventInit_Parms
		{
			UESGridSystem* InGridSystem;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGridSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UESBuildingSystem_Init_Statics::NewProp_InGridSystem = { "InGridSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventInit_Parms, InGridSystem), Z_Construct_UClass_UESGridSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESBuildingSystem_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_Init_Statics::NewProp_InGridSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESBuildingSystem_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Building" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESBuildingSystem_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESBuildingSystem, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_UESBuildingSystem_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESBuildingSystem_Init_Statics::ESBuildingSystem_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESBuildingSystem_Init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_Init_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESBuildingSystem_Init_Statics::ESBuildingSystem_eventInit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESBuildingSystem_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESBuildingSystem_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics
	{
		struct ESBuildingSystem_eventPlaceBuilding_Parms
		{
			FIntPoint Position;
			FBuildingData InBuildingData;
			EGridDirection Direction;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBuildingData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventPlaceBuilding_Parms, Position), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::NewProp_InBuildingData = { "InBuildingData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventPlaceBuilding_Parms, InBuildingData), Z_Construct_UScriptStruct_FBuildingData, METADATA_PARAMS(0, nullptr) }; // 669079497
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventPlaceBuilding_Parms, Direction), Z_Construct_UEnum_EveOfTheStorm_EGridDirection, METADATA_PARAMS(0, nullptr) }; // 3444209995
	void Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ESBuildingSystem_eventPlaceBuilding_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ESBuildingSystem_eventPlaceBuilding_Parms), &Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::NewProp_InBuildingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Building" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESBuildingSystem, nullptr, "PlaceBuilding", nullptr, nullptr, Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::ESBuildingSystem_eventPlaceBuilding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::ESBuildingSystem_eventPlaceBuilding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding_Statics
	{
		struct ESBuildingSystem_eventPlaceInitialBuilding_Parms
		{
			TArray<FBuildingInitData> Data;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuildingInitData, METADATA_PARAMS(0, nullptr) }; // 3235288823
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventPlaceInitialBuilding_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3235288823
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESBuildingSystem, nullptr, "PlaceInitialBuilding", nullptr, nullptr, Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding_Statics::ESBuildingSystem_eventPlaceInitialBuilding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding_Statics::ESBuildingSystem_eventPlaceInitialBuilding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESBuildingSystem_SetCurrentTick_Statics
	{
		struct ESBuildingSystem_eventSetCurrentTick_Parms
		{
			int32 InTick;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UESBuildingSystem_SetCurrentTick_Statics::NewProp_InTick = { "InTick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ESBuildingSystem_eventSetCurrentTick_Parms, InTick), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UESBuildingSystem_SetCurrentTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UESBuildingSystem_SetCurrentTick_Statics::NewProp_InTick,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESBuildingSystem_SetCurrentTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Building" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESBuildingSystem_SetCurrentTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESBuildingSystem, nullptr, "SetCurrentTick", nullptr, nullptr, Z_Construct_UFunction_UESBuildingSystem_SetCurrentTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_SetCurrentTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UESBuildingSystem_SetCurrentTick_Statics::ESBuildingSystem_eventSetCurrentTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_SetCurrentTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESBuildingSystem_SetCurrentTick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_SetCurrentTick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UESBuildingSystem_SetCurrentTick_Statics::ESBuildingSystem_eventSetCurrentTick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UESBuildingSystem_SetCurrentTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESBuildingSystem_SetCurrentTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UESBuildingSystem_TickBuilding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UESBuildingSystem_TickBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "ES|Building" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UESBuildingSystem_TickBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UESBuildingSystem, nullptr, "TickBuilding", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UESBuildingSystem_TickBuilding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UESBuildingSystem_TickBuilding_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UESBuildingSystem_TickBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UESBuildingSystem_TickBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UESBuildingSystem);
	UClass* Z_Construct_UClass_UESBuildingSystem_NoRegister()
	{
		return UESBuildingSystem::StaticClass();
	}
	struct Z_Construct_UClass_UESBuildingSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridSizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBuildingTriggerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBuildingTriggerEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridSystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildingData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BuildingData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTick_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UESBuildingSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EveOfTheStorm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESBuildingSystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UESBuildingSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UESBuildingSystem_CanPlaceBuilding, "CanPlaceBuilding" }, // 1061778523
		{ &Z_Construct_UFunction_UESBuildingSystem_DropBuilding, "DropBuilding" }, // 310632671
		{ &Z_Construct_UFunction_UESBuildingSystem_DropBuildingByPosition, "DropBuildingByPosition" }, // 3279346936
		{ &Z_Construct_UFunction_UESBuildingSystem_GetBuildingByIndex, "GetBuildingByIndex" }, // 2593048556
		{ &Z_Construct_UFunction_UESBuildingSystem_GetBuildingByPosition, "GetBuildingByPosition" }, // 3543280372
		{ &Z_Construct_UFunction_UESBuildingSystem_GetEstimateCost, "GetEstimateCost" }, // 1399589372
		{ &Z_Construct_UFunction_UESBuildingSystem_HasBuilding, "HasBuilding" }, // 524519372
		{ &Z_Construct_UFunction_UESBuildingSystem_Init, "Init" }, // 708027180
		{ &Z_Construct_UFunction_UESBuildingSystem_PlaceBuilding, "PlaceBuilding" }, // 938885706
		{ &Z_Construct_UFunction_UESBuildingSystem_PlaceInitialBuilding, "PlaceInitialBuilding" }, // 2755818687
		{ &Z_Construct_UFunction_UESBuildingSystem_SetCurrentTick, "SetCurrentTick" }, // 3264506387
		{ &Z_Construct_UFunction_UESBuildingSystem_TickBuilding, "TickBuilding" }, // 2284544935
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESBuildingSystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESBuildingSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Grid/ESBuildingSystem.h" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_GridSizeX_MetaData[] = {
		{ "Category", "ESBuildingSystem" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_GridSizeX = { "GridSizeX", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESBuildingSystem, GridSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_GridSizeX_MetaData), Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_GridSizeX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_GridSizeY_MetaData[] = {
		{ "Category", "ESBuildingSystem" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_GridSizeY = { "GridSizeY", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESBuildingSystem, GridSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_GridSizeY_MetaData), Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_GridSizeY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_OnBuildingTriggerEvent_MetaData[] = {
		{ "Category", "ES|Building" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_OnBuildingTriggerEvent = { "OnBuildingTriggerEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESBuildingSystem, OnBuildingTriggerEvent), Z_Construct_UDelegateFunction_EveOfTheStorm_OnBuildingTriggerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_OnBuildingTriggerEvent_MetaData), Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_OnBuildingTriggerEvent_MetaData) }; // 3950990661
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_GridSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_GridSystem = { "GridSystem", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESBuildingSystem, GridSystem), Z_Construct_UClass_UESGridSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_GridSystem_MetaData), Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_GridSystem_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_BuildingData_Inner = { "BuildingData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuildingInfo, METADATA_PARAMS(0, nullptr) }; // 1786536396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_BuildingData_MetaData[] = {
		{ "Category", "ESBuildingSystem" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_BuildingData = { "BuildingData", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESBuildingSystem, BuildingData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_BuildingData_MetaData), Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_BuildingData_MetaData) }; // 1786536396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_CurrentTick_MetaData[] = {
		{ "Category", "ESBuildingSystem" },
		{ "ModuleRelativePath", "Public/Core/Grid/ESBuildingSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_CurrentTick = { "CurrentTick", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UESBuildingSystem, CurrentTick), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_CurrentTick_MetaData), Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_CurrentTick_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UESBuildingSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_GridSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_GridSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_OnBuildingTriggerEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_GridSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_BuildingData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_BuildingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UESBuildingSystem_Statics::NewProp_CurrentTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UESBuildingSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UESBuildingSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UESBuildingSystem_Statics::ClassParams = {
		&UESBuildingSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UESBuildingSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UESBuildingSystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UESBuildingSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UESBuildingSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UESBuildingSystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UESBuildingSystem()
	{
		if (!Z_Registration_Info_UClass_UESBuildingSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UESBuildingSystem.OuterSingleton, Z_Construct_UClass_UESBuildingSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UESBuildingSystem.OuterSingleton;
	}
	template<> EVEOFTHESTORM_API UClass* StaticClass<UESBuildingSystem>()
	{
		return UESBuildingSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UESBuildingSystem);
	UESBuildingSystem::~UESBuildingSystem() {}
	struct Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_Statics::ScriptStructInfo[] = {
		{ FBuildRewardPeriod::StaticStruct, Z_Construct_UScriptStruct_FBuildRewardPeriod_Statics::NewStructOps, TEXT("BuildRewardPeriod"), &Z_Registration_Info_UScriptStruct_BuildRewardPeriod, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildRewardPeriod), 1638628249U) },
		{ FBuildingData::StaticStruct, Z_Construct_UScriptStruct_FBuildingData_Statics::NewStructOps, TEXT("BuildingData"), &Z_Registration_Info_UScriptStruct_BuildingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildingData), 669079497U) },
		{ FBuildingInfo::StaticStruct, Z_Construct_UScriptStruct_FBuildingInfo_Statics::NewStructOps, TEXT("BuildingInfo"), &Z_Registration_Info_UScriptStruct_BuildingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildingInfo), 1786536396U) },
		{ FBuildingInitData::StaticStruct, Z_Construct_UScriptStruct_FBuildingInitData_Statics::NewStructOps, TEXT("BuildingInitData"), &Z_Registration_Info_UScriptStruct_BuildingInitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildingInitData), 3235288823U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UESBuildingSystem, UESBuildingSystem::StaticClass, TEXT("UESBuildingSystem"), &Z_Registration_Info_UClass_UESBuildingSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UESBuildingSystem), 1341521717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_3610203354(TEXT("/Script/EveOfTheStorm"),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EveOfTheStorm_Source_EveOfTheStorm_Public_Core_Grid_ESBuildingSystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
