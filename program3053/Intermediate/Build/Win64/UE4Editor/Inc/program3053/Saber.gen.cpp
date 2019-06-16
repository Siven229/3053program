// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "program3053/Saber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaber() {}
// Cross Module References
	PROGRAM3053_API UClass* Z_Construct_UClass_ASaber_NoRegister();
	PROGRAM3053_API UClass* Z_Construct_UClass_ASaber();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_program3053();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ASaber_DecreaseSkillPoint();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ASaber_FireShot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ASaber_IncreaeeDefendArrowPower();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ASaber_IncreaseAcquiredEXP();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ASaber_IncreaseAcquiredHP();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ASaber_IncreaseAllAbilities();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ASaber_IncreaseArrowNumber();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ASaber_IncreaseDefensivePower();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ASaber_IncreaseHPBySecond();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ASaber_IncreaseHPMax();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_ASaber_IncreaseMoveSpeed();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASaber::StaticRegisterNativesASaber()
	{
		UClass* Class = ASaber::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseSkillPoint", &ASaber::execDecreaseSkillPoint },
			{ "FireShot", &ASaber::execFireShot },
			{ "IncreaeeDefendArrowPower", &ASaber::execIncreaeeDefendArrowPower },
			{ "IncreaseAcquiredEXP", &ASaber::execIncreaseAcquiredEXP },
			{ "IncreaseAcquiredHP", &ASaber::execIncreaseAcquiredHP },
			{ "IncreaseAllAbilities", &ASaber::execIncreaseAllAbilities },
			{ "IncreaseArrowNumber", &ASaber::execIncreaseArrowNumber },
			{ "IncreaseDefensivePower", &ASaber::execIncreaseDefensivePower },
			{ "IncreaseHPBySecond", &ASaber::execIncreaseHPBySecond },
			{ "IncreaseHPMax", &ASaber::execIncreaseHPMax },
			{ "IncreaseMoveSpeed", &ASaber::execIncreaseMoveSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASaber_DecreaseSkillPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASaber_DecreaseSkillPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASaber_DecreaseSkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASaber, nullptr, "DecreaseSkillPoint", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASaber_DecreaseSkillPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASaber_DecreaseSkillPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASaber_DecreaseSkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASaber_DecreaseSkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASaber_FireShot_Statics
	{
		struct Saber_eventFireShot_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASaber_FireShot_Statics::NewProp_FireDirection = { "FireDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Saber_eventFireShot_Parms, FireDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASaber_FireShot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASaber_FireShot_Statics::NewProp_FireDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASaber_FireShot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Function" },
		{ "ModuleRelativePath", "Saber.h" },
		{ "ToolTip", "Fire a shot in the specified direction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASaber_FireShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASaber, nullptr, "FireShot", sizeof(Saber_eventFireShot_Parms), Z_Construct_UFunction_ASaber_FireShot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASaber_FireShot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASaber_FireShot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASaber_FireShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASaber_FireShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASaber_FireShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASaber_IncreaeeDefendArrowPower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASaber_IncreaeeDefendArrowPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASaber_IncreaeeDefendArrowPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASaber, nullptr, "IncreaeeDefendArrowPower", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASaber_IncreaeeDefendArrowPower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASaber_IncreaeeDefendArrowPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASaber_IncreaeeDefendArrowPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASaber_IncreaeeDefendArrowPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASaber_IncreaseAcquiredEXP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASaber_IncreaseAcquiredEXP_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASaber_IncreaseAcquiredEXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASaber, nullptr, "IncreaseAcquiredEXP", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASaber_IncreaseAcquiredEXP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASaber_IncreaseAcquiredEXP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASaber_IncreaseAcquiredEXP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASaber_IncreaseAcquiredEXP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASaber_IncreaseAcquiredHP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASaber_IncreaseAcquiredHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASaber_IncreaseAcquiredHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASaber, nullptr, "IncreaseAcquiredHP", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASaber_IncreaseAcquiredHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASaber_IncreaseAcquiredHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASaber_IncreaseAcquiredHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASaber_IncreaseAcquiredHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASaber_IncreaseAllAbilities_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASaber_IncreaseAllAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASaber_IncreaseAllAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASaber, nullptr, "IncreaseAllAbilities", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASaber_IncreaseAllAbilities_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASaber_IncreaseAllAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASaber_IncreaseAllAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASaber_IncreaseAllAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASaber_IncreaseArrowNumber_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASaber_IncreaseArrowNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASaber_IncreaseArrowNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASaber, nullptr, "IncreaseArrowNumber", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASaber_IncreaseArrowNumber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASaber_IncreaseArrowNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASaber_IncreaseArrowNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASaber_IncreaseArrowNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASaber_IncreaseDefensivePower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASaber_IncreaseDefensivePower_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASaber_IncreaseDefensivePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASaber, nullptr, "IncreaseDefensivePower", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASaber_IncreaseDefensivePower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASaber_IncreaseDefensivePower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASaber_IncreaseDefensivePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASaber_IncreaseDefensivePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASaber_IncreaseHPBySecond_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASaber_IncreaseHPBySecond_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASaber_IncreaseHPBySecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASaber, nullptr, "IncreaseHPBySecond", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASaber_IncreaseHPBySecond_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASaber_IncreaseHPBySecond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASaber_IncreaseHPBySecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASaber_IncreaseHPBySecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASaber_IncreaseHPMax_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASaber_IncreaseHPMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASaber_IncreaseHPMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASaber, nullptr, "IncreaseHPMax", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASaber_IncreaseHPMax_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASaber_IncreaseHPMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASaber_IncreaseHPMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASaber_IncreaseHPMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASaber_IncreaseMoveSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASaber_IncreaseMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASaber_IncreaseMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASaber, nullptr, "IncreaseMoveSpeed", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASaber_IncreaseMoveSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASaber_IncreaseMoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASaber_IncreaseMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASaber_IncreaseMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASaber_NoRegister()
	{
		return ASaber::StaticClass();
	}
	struct Z_Construct_UClass_ASaber_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IfIncreaseHP_MetaData[];
#endif
		static void NewProp_IfIncreaseHP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IfIncreaseHP;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
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
	UObject* (*const Z_Construct_UClass_ASaber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_program3053,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASaber_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASaber_DecreaseSkillPoint, "DecreaseSkillPoint" }, // 2395437329
		{ &Z_Construct_UFunction_ASaber_FireShot, "FireShot" }, // 3880624713
		{ &Z_Construct_UFunction_ASaber_IncreaeeDefendArrowPower, "IncreaeeDefendArrowPower" }, // 4122030591
		{ &Z_Construct_UFunction_ASaber_IncreaseAcquiredEXP, "IncreaseAcquiredEXP" }, // 2257281687
		{ &Z_Construct_UFunction_ASaber_IncreaseAcquiredHP, "IncreaseAcquiredHP" }, // 2296526620
		{ &Z_Construct_UFunction_ASaber_IncreaseAllAbilities, "IncreaseAllAbilities" }, // 2809502985
		{ &Z_Construct_UFunction_ASaber_IncreaseArrowNumber, "IncreaseArrowNumber" }, // 2919598538
		{ &Z_Construct_UFunction_ASaber_IncreaseDefensivePower, "IncreaseDefensivePower" }, // 2955029139
		{ &Z_Construct_UFunction_ASaber_IncreaseHPBySecond, "IncreaseHPBySecond" }, // 158628614
		{ &Z_Construct_UFunction_ASaber_IncreaseHPMax, "IncreaseHPMax" }, // 854247772
		{ &Z_Construct_UFunction_ASaber_IncreaseMoveSpeed, "IncreaseMoveSpeed" }, // 2832391975
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Saber.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_ArrowNumber_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_ArrowNumber = { "ArrowNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, ArrowNumber), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_ArrowNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_ArrowNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_SkillPoint_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_SkillPoint = { "SkillPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, SkillPoint), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_SkillPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_SkillPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, Level), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_Level_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_LevelMax_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_LevelMax = { "LevelMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, LevelMax), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_LevelMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_LevelMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_LevelInitialization_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_LevelInitialization = { "LevelInitialization", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, LevelInitialization), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_LevelInitialization_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_LevelInitialization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_IfIncreaseHP_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	void Z_Construct_UClass_ASaber_Statics::NewProp_IfIncreaseHP_SetBit(void* Obj)
	{
		((ASaber*)Obj)->IfIncreaseHP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_IfIncreaseHP = { "IfIncreaseHP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASaber), &Z_Construct_UClass_ASaber_Statics::NewProp_IfIncreaseHP_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_IfIncreaseHP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_IfIncreaseHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_DefendArrowPower_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_DefendArrowPower = { "DefendArrowPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, DefendArrowPower), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_DefendArrowPower_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_DefendArrowPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_DefensivePower_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_DefensivePower = { "DefensivePower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, DefensivePower), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_DefensivePower_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_DefensivePower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_EXPImproveLarge_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_EXPImproveLarge = { "EXPImproveLarge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, EXPImproveLarge), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_EXPImproveLarge_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_EXPImproveLarge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_EXPImproveMiddle_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_EXPImproveMiddle = { "EXPImproveMiddle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, EXPImproveMiddle), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_EXPImproveMiddle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_EXPImproveMiddle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_EXPImproveLittle_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_EXPImproveLittle = { "EXPImproveLittle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, EXPImproveLittle), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_EXPImproveLittle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_EXPImproveLittle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_EXPMax_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_EXPMax = { "EXPMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, EXPMax), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_EXPMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_EXPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_EXP_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_EXP = { "EXP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, EXP), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_EXP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_EXP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, Damage), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_Damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_HPRecoveryLarge_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_HPRecoveryLarge = { "HPRecoveryLarge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, HPRecoveryLarge), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_HPRecoveryLarge_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_HPRecoveryLarge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_HPRecoveryMiddle_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_HPRecoveryMiddle = { "HPRecoveryMiddle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, HPRecoveryMiddle), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_HPRecoveryMiddle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_HPRecoveryMiddle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_HPRecoveryLittle_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_HPRecoveryLittle = { "HPRecoveryLittle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, HPRecoveryLittle), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_HPRecoveryLittle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_HPRecoveryLittle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, HP), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_HP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_HPMax_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "Saber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_HPMax = { "HPMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, HPMax), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_HPMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_HPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_HurtSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Saber.h" },
		{ "ToolTip", "Sound to play each time we hurt" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_HurtSound = { "HurtSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, HurtSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_HurtSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_HurtSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Saber.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_FireSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Saber.h" },
		{ "ToolTip", "The speed our ship moves around the level" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_MoveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Saber.h" },
		{ "ToolTip", "How fast the weapon will fire" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, FireRate), METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_FireRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Saber.h" },
		{ "ToolTip", "Offset from the ships location to spawn projectiles" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_GunOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Saber.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Saber.h" },
		{ "ToolTip", "The camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_CameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASaber_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Saber.h" },
		{ "ToolTip", "The mesh component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASaber_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASaber, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASaber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_ArrowNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_SkillPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_LevelMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_LevelInitialization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_IfIncreaseHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_DefendArrowPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_DefensivePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_EXPImproveLarge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_EXPImproveMiddle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_EXPImproveLittle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_EXPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_EXP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_HPRecoveryLarge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_HPRecoveryMiddle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_HPRecoveryLittle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_HPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_HurtSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASaber_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASaber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASaber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASaber_Statics::ClassParams = {
		&ASaber::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASaber_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASaber_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASaber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASaber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASaber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASaber, 2665576461);
	template<> PROGRAM3053_API UClass* StaticClass<ASaber>()
	{
		return ASaber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASaber(Z_Construct_UClass_ASaber, &ASaber::StaticClass, TEXT("/Script/program3053"), TEXT("ASaber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASaber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
