// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "program3053/AiCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAiCharacter() {}
// Cross Module References
	PROGRAM3053_API UClass* Z_Construct_UClass_AAiCharacter_NoRegister();
	PROGRAM3053_API UClass* Z_Construct_UClass_AAiCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_program3053();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_AAiCharacter_IncreaseDoubleDamageProbability();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void AAiCharacter::StaticRegisterNativesAAiCharacter()
	{
		UClass* Class = AAiCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IncreaseDoubleDamageProbability", &AAiCharacter::execIncreaseDoubleDamageProbability },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAiCharacter_IncreaseDoubleDamageProbability_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAiCharacter_IncreaseDoubleDamageProbability_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "AiCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAiCharacter_IncreaseDoubleDamageProbability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAiCharacter, nullptr, "IncreaseDoubleDamageProbability", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAiCharacter_IncreaseDoubleDamageProbability_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAiCharacter_IncreaseDoubleDamageProbability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAiCharacter_IncreaseDoubleDamageProbability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAiCharacter_IncreaseDoubleDamageProbability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAiCharacter_NoRegister()
	{
		return AAiCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAiCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbabilitySimulation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProbabilitySimulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicInjury_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagicInjury;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BladeInjury_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BladeInjury;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowInjury_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArrowInjury;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleDamagedSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoubleDamagedSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicHitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagicHitSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BladeHitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BladeHitSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BowHitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BowHitSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAiCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_program3053,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAiCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAiCharacter_IncreaseDoubleDamageProbability, "IncreaseDoubleDamageProbability" }, // 1278888421
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AiCharacter.h" },
		{ "ModuleRelativePath", "AiCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiCharacter_Statics::NewProp_ProbabilitySimulation_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "AiCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAiCharacter_Statics::NewProp_ProbabilitySimulation = { "ProbabilitySimulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAiCharacter, ProbabilitySimulation), METADATA_PARAMS(Z_Construct_UClass_AAiCharacter_Statics::NewProp_ProbabilitySimulation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAiCharacter_Statics::NewProp_ProbabilitySimulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiCharacter_Statics::NewProp_MagicInjury_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "AiCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAiCharacter_Statics::NewProp_MagicInjury = { "MagicInjury", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAiCharacter, MagicInjury), METADATA_PARAMS(Z_Construct_UClass_AAiCharacter_Statics::NewProp_MagicInjury_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAiCharacter_Statics::NewProp_MagicInjury_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiCharacter_Statics::NewProp_BladeInjury_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "AiCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAiCharacter_Statics::NewProp_BladeInjury = { "BladeInjury", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAiCharacter, BladeInjury), METADATA_PARAMS(Z_Construct_UClass_AAiCharacter_Statics::NewProp_BladeInjury_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAiCharacter_Statics::NewProp_BladeInjury_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiCharacter_Statics::NewProp_ArrowInjury_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "AiCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAiCharacter_Statics::NewProp_ArrowInjury = { "ArrowInjury", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAiCharacter, ArrowInjury), METADATA_PARAMS(Z_Construct_UClass_AAiCharacter_Statics::NewProp_ArrowInjury_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAiCharacter_Statics::NewProp_ArrowInjury_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiCharacter_Statics::NewProp_AIHP_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "AiCharacter.h" },
		{ "ToolTip", "set basic data" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAiCharacter_Statics::NewProp_AIHP = { "AIHP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAiCharacter, AIHP), METADATA_PARAMS(Z_Construct_UClass_AAiCharacter_Statics::NewProp_AIHP_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAiCharacter_Statics::NewProp_AIHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiCharacter_Statics::NewProp_DoubleDamagedSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "AiCharacter.h" },
		{ "ToolTip", "Sound to play each time Get Double Hit" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAiCharacter_Statics::NewProp_DoubleDamagedSound = { "DoubleDamagedSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAiCharacter, DoubleDamagedSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAiCharacter_Statics::NewProp_DoubleDamagedSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAiCharacter_Statics::NewProp_DoubleDamagedSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiCharacter_Statics::NewProp_MagicHitSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "AiCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAiCharacter_Statics::NewProp_MagicHitSound = { "MagicHitSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAiCharacter, MagicHitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAiCharacter_Statics::NewProp_MagicHitSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAiCharacter_Statics::NewProp_MagicHitSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiCharacter_Statics::NewProp_BladeHitSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "AiCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAiCharacter_Statics::NewProp_BladeHitSound = { "BladeHitSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAiCharacter, BladeHitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAiCharacter_Statics::NewProp_BladeHitSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAiCharacter_Statics::NewProp_BladeHitSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiCharacter_Statics::NewProp_BowHitSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "AiCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAiCharacter_Statics::NewProp_BowHitSound = { "BowHitSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAiCharacter, BowHitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAiCharacter_Statics::NewProp_BowHitSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAiCharacter_Statics::NewProp_BowHitSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiCharacter_Statics::NewProp_HitSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "AiCharacter.h" },
		{ "ToolTip", "Sound to play each time Get Hit" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAiCharacter_Statics::NewProp_HitSound = { "HitSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAiCharacter, HitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAiCharacter_Statics::NewProp_HitSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAiCharacter_Statics::NewProp_HitSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAiCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiCharacter_Statics::NewProp_ProbabilitySimulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiCharacter_Statics::NewProp_MagicInjury,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiCharacter_Statics::NewProp_BladeInjury,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiCharacter_Statics::NewProp_ArrowInjury,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiCharacter_Statics::NewProp_AIHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiCharacter_Statics::NewProp_DoubleDamagedSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiCharacter_Statics::NewProp_MagicHitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiCharacter_Statics::NewProp_BladeHitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiCharacter_Statics::NewProp_BowHitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAiCharacter_Statics::NewProp_HitSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAiCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAiCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAiCharacter_Statics::ClassParams = {
		&AAiCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAiCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAiCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAiCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAiCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAiCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAiCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAiCharacter, 85655555);
	template<> PROGRAM3053_API UClass* StaticClass<AAiCharacter>()
	{
		return AAiCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAiCharacter(Z_Construct_UClass_AAiCharacter, &AAiCharacter::StaticClass, TEXT("/Script/program3053"), TEXT("AAiCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAiCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
