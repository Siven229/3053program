// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "program3053/Caster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaster() {}
// Cross Module References
	PROGRAM3053_API UClass* Z_Construct_UClass_ACaster_NoRegister();
	PROGRAM3053_API UClass* Z_Construct_UClass_ACaster();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_program3053();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ACaster_DecreaseSkillPoint();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ACaster_FireShot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ACaster_IncreaeeDefendArrowPower();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ACaster_IncreaseAcquiredEXP();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ACaster_IncreaseAcquiredHP();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ACaster_IncreaseArrowNumber();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ACaster_IncreaseDefensivePower();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ACaster_IncreaseHPMax();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ACaster_IncreaseMoveSpeed();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACaster::StaticRegisterNativesACaster()
	{
		UClass* Class = ACaster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseSkillPoint", &ACaster::execDecreaseSkillPoint },
			{ "FireShot", &ACaster::execFireShot },
			{ "IncreaeeDefendArrowPower", &ACaster::execIncreaeeDefendArrowPower },
			{ "IncreaseAcquiredEXP", &ACaster::execIncreaseAcquiredEXP },
			{ "IncreaseAcquiredHP", &ACaster::execIncreaseAcquiredHP },
			{ "IncreaseArrowNumber", &ACaster::execIncreaseArrowNumber },
			{ "IncreaseDefensivePower", &ACaster::execIncreaseDefensivePower },
			{ "IncreaseHPMax", &ACaster::execIncreaseHPMax },
			{ "IncreaseMoveSpeed", &ACaster::execIncreaseMoveSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACaster_DecreaseSkillPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaster_DecreaseSkillPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaster_DecreaseSkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaster, nullptr, "DecreaseSkillPoint", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaster_DecreaseSkillPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACaster_DecreaseSkillPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaster_DecreaseSkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaster_DecreaseSkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaster_FireShot_Statics
	{
		struct Caster_eventFireShot_Parms
		{
			FVector FireDirection;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACaster_FireShot_Statics::NewProp_FireDirection = { "FireDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Caster_eventFireShot_Parms, FireDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaster_FireShot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaster_FireShot_Statics::NewProp_FireDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaster_FireShot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Function" },
		{ "ModuleRelativePath", "Caster.h" },
		{ "ToolTip", "Fire a shot in the specified direction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaster_FireShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaster, nullptr, "FireShot", sizeof(Caster_eventFireShot_Parms), Z_Construct_UFunction_ACaster_FireShot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACaster_FireShot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaster_FireShot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACaster_FireShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaster_FireShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaster_FireShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaster_IncreaeeDefendArrowPower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaster_IncreaeeDefendArrowPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaster_IncreaeeDefendArrowPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaster, nullptr, "IncreaeeDefendArrowPower", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaster_IncreaeeDefendArrowPower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACaster_IncreaeeDefendArrowPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaster_IncreaeeDefendArrowPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaster_IncreaeeDefendArrowPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaster_IncreaseAcquiredEXP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaster_IncreaseAcquiredEXP_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaster_IncreaseAcquiredEXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaster, nullptr, "IncreaseAcquiredEXP", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaster_IncreaseAcquiredEXP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACaster_IncreaseAcquiredEXP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaster_IncreaseAcquiredEXP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaster_IncreaseAcquiredEXP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaster_IncreaseAcquiredHP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaster_IncreaseAcquiredHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaster_IncreaseAcquiredHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaster, nullptr, "IncreaseAcquiredHP", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaster_IncreaseAcquiredHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACaster_IncreaseAcquiredHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaster_IncreaseAcquiredHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaster_IncreaseAcquiredHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaster_IncreaseArrowNumber_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaster_IncreaseArrowNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaster_IncreaseArrowNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaster, nullptr, "IncreaseArrowNumber", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaster_IncreaseArrowNumber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACaster_IncreaseArrowNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaster_IncreaseArrowNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaster_IncreaseArrowNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaster_IncreaseDefensivePower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaster_IncreaseDefensivePower_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaster_IncreaseDefensivePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaster, nullptr, "IncreaseDefensivePower", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaster_IncreaseDefensivePower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACaster_IncreaseDefensivePower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaster_IncreaseDefensivePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaster_IncreaseDefensivePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaster_IncreaseHPMax_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaster_IncreaseHPMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaster_IncreaseHPMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaster, nullptr, "IncreaseHPMax", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaster_IncreaseHPMax_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACaster_IncreaseHPMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaster_IncreaseHPMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaster_IncreaseHPMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaster_IncreaseMoveSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaster_IncreaseMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaster_IncreaseMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaster, nullptr, "IncreaseMoveSpeed", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaster_IncreaseMoveSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACaster_IncreaseMoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaster_IncreaseMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaster_IncreaseMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACaster_NoRegister()
	{
		return ACaster::StaticClass();
	}
	struct Z_Construct_UClass_ACaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrowNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelInitialization_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelInitialization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefendArrowPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefendArrowPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefensivePower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefensivePower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EXPImproveLarge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EXPImproveLarge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EXPImproveMiddle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EXPImproveMiddle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EXPImproveLittle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EXPImproveLittle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EXPMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EXPMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EXP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EXP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPRecoveryLarge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HPRecoveryLarge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPRecoveryMiddle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HPRecoveryMiddle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPRecoveryLittle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HPRecoveryLittle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HPMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HurtSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagicSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_program3053,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACaster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACaster_DecreaseSkillPoint, "DecreaseSkillPoint" }, // 4174270530
		{ &Z_Construct_UFunction_ACaster_FireShot, "FireShot" }, // 2858122632
		{ &Z_Construct_UFunction_ACaster_IncreaeeDefendArrowPower, "IncreaeeDefendArrowPower" }, // 4056111296
		{ &Z_Construct_UFunction_ACaster_IncreaseAcquiredEXP, "IncreaseAcquiredEXP" }, // 626438808
		{ &Z_Construct_UFunction_ACaster_IncreaseAcquiredHP, "IncreaseAcquiredHP" }, // 1788387161
		{ &Z_Construct_UFunction_ACaster_IncreaseArrowNumber, "IncreaseArrowNumber" }, // 568966145
		{ &Z_Construct_UFunction_ACaster_IncreaseDefensivePower, "IncreaseDefensivePower" }, // 1390556563
		{ &Z_Construct_UFunction_ACaster_IncreaseHPMax, "IncreaseHPMax" }, // 2047166335
		{ &Z_Construct_UFunction_ACaster_IncreaseMoveSpeed, "IncreaseMoveSpeed" }, // 98995357
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Caster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_ArrowNumber_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_ArrowNumber = { "ArrowNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, ArrowNumber), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_ArrowNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_ArrowNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_SkillPoint_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_SkillPoint = { "SkillPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, SkillPoint), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_SkillPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_SkillPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, Level), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_Level_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_LevelMax_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_LevelMax = { "LevelMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, LevelMax), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_LevelMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_LevelMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_LevelInitialization_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_LevelInitialization = { "LevelInitialization", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, LevelInitialization), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_LevelInitialization_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_LevelInitialization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_DefendArrowPower_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_DefendArrowPower = { "DefendArrowPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, DefendArrowPower), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_DefendArrowPower_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_DefendArrowPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_DefensivePower_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_DefensivePower = { "DefensivePower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, DefensivePower), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_DefensivePower_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_DefensivePower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_EXPImproveLarge_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_EXPImproveLarge = { "EXPImproveLarge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, EXPImproveLarge), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_EXPImproveLarge_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_EXPImproveLarge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_EXPImproveMiddle_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_EXPImproveMiddle = { "EXPImproveMiddle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, EXPImproveMiddle), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_EXPImproveMiddle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_EXPImproveMiddle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_EXPImproveLittle_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_EXPImproveLittle = { "EXPImproveLittle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, EXPImproveLittle), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_EXPImproveLittle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_EXPImproveLittle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_EXPMax_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_EXPMax = { "EXPMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, EXPMax), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_EXPMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_EXPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_EXP_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_EXP = { "EXP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, EXP), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_EXP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_EXP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, Damage), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_Damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_HPRecoveryLarge_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_HPRecoveryLarge = { "HPRecoveryLarge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, HPRecoveryLarge), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_HPRecoveryLarge_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_HPRecoveryLarge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_HPRecoveryMiddle_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_HPRecoveryMiddle = { "HPRecoveryMiddle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, HPRecoveryMiddle), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_HPRecoveryMiddle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_HPRecoveryMiddle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_HPRecoveryLittle_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_HPRecoveryLittle = { "HPRecoveryLittle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, HPRecoveryLittle), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_HPRecoveryLittle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_HPRecoveryLittle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, HP), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_HP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_HPMax_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Caster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_HPMax = { "HPMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, HPMax), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_HPMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_HPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_HurtSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Caster.h" },
		{ "ToolTip", "Sound to play each time we hurt" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_HurtSound = { "HurtSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, HurtSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_HurtSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_HurtSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_MagicSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Caster.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_MagicSound = { "MagicSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, MagicSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_MagicSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_MagicSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Caster.h" },
		{ "ToolTip", "The speed our ship moves around the level" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_MoveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Caster.h" },
		{ "ToolTip", "How fast the weapon will fire" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, FireRate), METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_FireRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Caster.h" },
		{ "ToolTip", "Offset from the ships location to spawn projectiles" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_GunOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Caster.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Caster.h" },
		{ "ToolTip", "The camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_CameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaster_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Caster.h" },
		{ "ToolTip", "The mesh component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaster_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaster, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_ArrowNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_SkillPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_LevelMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_LevelInitialization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_DefendArrowPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_DefensivePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_EXPImproveLarge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_EXPImproveMiddle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_EXPImproveLittle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_EXPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_EXP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_HPRecoveryLarge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_HPRecoveryMiddle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_HPRecoveryLittle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_HPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_HurtSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_MagicSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaster_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACaster_Statics::ClassParams = {
		&ACaster::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACaster_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACaster_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACaster, 1583825500);
	template<> PROGRAM3053_API UClass* StaticClass<ACaster>()
	{
		return ACaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACaster(Z_Construct_UClass_ACaster, &ACaster::StaticClass, TEXT("/Script/program3053"), TEXT("ACaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
