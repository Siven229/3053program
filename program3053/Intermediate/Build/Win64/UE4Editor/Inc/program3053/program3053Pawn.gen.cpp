// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "program3053/program3053Pawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeprogram3053Pawn() {}
// Cross Module References
	PROGRAM3053_API UClass* Z_Construct_UClass_Aprogram3053Pawn_NoRegister();
	PROGRAM3053_API UClass* Z_Construct_UClass_Aprogram3053Pawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_program3053();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_Aprogram3053Pawn_DecreaseSkillPoint();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_Aprogram3053Pawn_FireShot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredEXP();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredHP();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_Aprogram3053Pawn_IncreaseHPMax();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_Aprogram3053Pawn_IncreaseMoveSpeed();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void Aprogram3053Pawn::StaticRegisterNativesAprogram3053Pawn()
	{
		UClass* Class = Aprogram3053Pawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseSkillPoint", &Aprogram3053Pawn::execDecreaseSkillPoint },
			{ "FireShot", &Aprogram3053Pawn::execFireShot },
			{ "IncreaseAcquiredEXP", &Aprogram3053Pawn::execIncreaseAcquiredEXP },
			{ "IncreaseAcquiredHP", &Aprogram3053Pawn::execIncreaseAcquiredHP },
			{ "IncreaseHPMax", &Aprogram3053Pawn::execIncreaseHPMax },
			{ "IncreaseMoveSpeed", &Aprogram3053Pawn::execIncreaseMoveSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Aprogram3053Pawn_DecreaseSkillPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aprogram3053Pawn_DecreaseSkillPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aprogram3053Pawn_DecreaseSkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aprogram3053Pawn, nullptr, "DecreaseSkillPoint", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aprogram3053Pawn_DecreaseSkillPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_Aprogram3053Pawn_DecreaseSkillPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aprogram3053Pawn_DecreaseSkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aprogram3053Pawn_DecreaseSkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aprogram3053Pawn_FireShot_Statics
	{
		struct program3053Pawn_eventFireShot_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Aprogram3053Pawn_FireShot_Statics::NewProp_FireDirection = { "FireDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(program3053Pawn_eventFireShot_Parms, FireDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aprogram3053Pawn_FireShot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aprogram3053Pawn_FireShot_Statics::NewProp_FireDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aprogram3053Pawn_FireShot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Function" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
		{ "ToolTip", "Fire a shot in the specified direction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aprogram3053Pawn_FireShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aprogram3053Pawn, nullptr, "FireShot", sizeof(program3053Pawn_eventFireShot_Parms), Z_Construct_UFunction_Aprogram3053Pawn_FireShot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_Aprogram3053Pawn_FireShot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aprogram3053Pawn_FireShot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_Aprogram3053Pawn_FireShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aprogram3053Pawn_FireShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aprogram3053Pawn_FireShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredEXP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredEXP_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredEXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aprogram3053Pawn, nullptr, "IncreaseAcquiredEXP", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredEXP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredEXP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredEXP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredEXP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredHP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aprogram3053Pawn, nullptr, "IncreaseAcquiredHP", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aprogram3053Pawn_IncreaseHPMax_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aprogram3053Pawn_IncreaseHPMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aprogram3053Pawn_IncreaseHPMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aprogram3053Pawn, nullptr, "IncreaseHPMax", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aprogram3053Pawn_IncreaseHPMax_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_Aprogram3053Pawn_IncreaseHPMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aprogram3053Pawn_IncreaseHPMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aprogram3053Pawn_IncreaseHPMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aprogram3053Pawn_IncreaseMoveSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aprogram3053Pawn_IncreaseMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aprogram3053Pawn_IncreaseMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aprogram3053Pawn, nullptr, "IncreaseMoveSpeed", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aprogram3053Pawn_IncreaseMoveSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_Aprogram3053Pawn_IncreaseMoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aprogram3053Pawn_IncreaseMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aprogram3053Pawn_IncreaseMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Aprogram3053Pawn_NoRegister()
	{
		return Aprogram3053Pawn::StaticClass();
	}
	struct Z_Construct_UClass_Aprogram3053Pawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddMoveSpeed;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aprogram3053Pawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_program3053,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Aprogram3053Pawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Aprogram3053Pawn_DecreaseSkillPoint, "DecreaseSkillPoint" }, // 272128649
		{ &Z_Construct_UFunction_Aprogram3053Pawn_FireShot, "FireShot" }, // 2104605268
		{ &Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredEXP, "IncreaseAcquiredEXP" }, // 2871379223
		{ &Z_Construct_UFunction_Aprogram3053Pawn_IncreaseAcquiredHP, "IncreaseAcquiredHP" }, // 1568021052
		{ &Z_Construct_UFunction_Aprogram3053Pawn_IncreaseHPMax, "IncreaseHPMax" }, // 1541535261
		{ &Z_Construct_UFunction_Aprogram3053Pawn_IncreaseMoveSpeed, "IncreaseMoveSpeed" }, // 3864603700
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "program3053Pawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_SkillPoint_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_SkillPoint = { "SkillPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, SkillPoint), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_SkillPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_SkillPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, Level), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_Level_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_LevelMax_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_LevelMax = { "LevelMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, LevelMax), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_LevelMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_LevelMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_LevelInitialization_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_LevelInitialization = { "LevelInitialization", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, LevelInitialization), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_LevelInitialization_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_LevelInitialization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_DefensivePower_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_DefensivePower = { "DefensivePower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, DefensivePower), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_DefensivePower_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_DefensivePower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPImproveLarge_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPImproveLarge = { "EXPImproveLarge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, EXPImproveLarge), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPImproveLarge_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPImproveLarge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPImproveMiddle_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPImproveMiddle = { "EXPImproveMiddle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, EXPImproveMiddle), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPImproveMiddle_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPImproveMiddle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPImproveLittle_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPImproveLittle = { "EXPImproveLittle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, EXPImproveLittle), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPImproveLittle_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPImproveLittle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPMax_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPMax = { "EXPMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, EXPMax), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXP_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXP = { "EXP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, EXP), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXP_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, Damage), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_Damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPRecoveryLarge_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPRecoveryLarge = { "HPRecoveryLarge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, HPRecoveryLarge), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPRecoveryLarge_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPRecoveryLarge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPRecoveryMiddle_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPRecoveryMiddle = { "HPRecoveryMiddle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, HPRecoveryMiddle), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPRecoveryMiddle_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPRecoveryMiddle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPRecoveryLittle_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPRecoveryLittle = { "HPRecoveryLittle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, HPRecoveryLittle), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPRecoveryLittle_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPRecoveryLittle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, HP), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HP_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPMax_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPMax = { "HPMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, HPMax), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HurtSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
		{ "ToolTip", "Sound to play each time we hurt" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HurtSound = { "HurtSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, HurtSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HurtSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HurtSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_FireSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_AddMoveSpeed_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_AddMoveSpeed = { "AddMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, AddMoveSpeed), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_AddMoveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_AddMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
		{ "ToolTip", "The speed our ship moves around the level" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_MoveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
		{ "ToolTip", "How fast the weapon will fire" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, FireRate), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_FireRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
		{ "ToolTip", "Offset from the ships location to spawn projectiles" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_GunOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
		{ "ToolTip", "The camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_CameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_ShipMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "program3053Pawn.h" },
		{ "ToolTip", "The mesh component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_ShipMeshComponent = { "ShipMeshComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Pawn, ShipMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_ShipMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_ShipMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aprogram3053Pawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_SkillPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_LevelMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_LevelInitialization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_DefensivePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPImproveLarge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPImproveMiddle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPImproveLittle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_EXP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPRecoveryLarge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPRecoveryMiddle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPRecoveryLittle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_HurtSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_AddMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Pawn_Statics::NewProp_ShipMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aprogram3053Pawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aprogram3053Pawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aprogram3053Pawn_Statics::ClassParams = {
		&Aprogram3053Pawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Aprogram3053Pawn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Pawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Pawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aprogram3053Pawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aprogram3053Pawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aprogram3053Pawn, 2414695259);
	template<> PROGRAM3053_API UClass* StaticClass<Aprogram3053Pawn>()
	{
		return Aprogram3053Pawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aprogram3053Pawn(Z_Construct_UClass_Aprogram3053Pawn, &Aprogram3053Pawn::StaticClass, TEXT("/Script/program3053"), TEXT("Aprogram3053Pawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aprogram3053Pawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
