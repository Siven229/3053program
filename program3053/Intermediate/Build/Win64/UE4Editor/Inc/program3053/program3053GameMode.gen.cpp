// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "program3053/program3053GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeprogram3053GameMode() {}
// Cross Module References
	PROGRAM3053_API UClass* Z_Construct_UClass_Aprogram3053GameMode_NoRegister();
	PROGRAM3053_API UClass* Z_Construct_UClass_Aprogram3053GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_program3053();
// End Cross Module References
	void Aprogram3053GameMode::StaticRegisterNativesAprogram3053GameMode()
	{
	}
	UClass* Z_Construct_UClass_Aprogram3053GameMode_NoRegister()
	{
		return Aprogram3053GameMode::StaticClass();
	}
	struct Z_Construct_UClass_Aprogram3053GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aprogram3053GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_program3053,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "program3053GameMode.h" },
		{ "ModuleRelativePath", "program3053GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aprogram3053GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aprogram3053GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aprogram3053GameMode_Statics::ClassParams = {
		&Aprogram3053GameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_Aprogram3053GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aprogram3053GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aprogram3053GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aprogram3053GameMode, 1809958074);
	template<> PROGRAM3053_API UClass* StaticClass<Aprogram3053GameMode>()
	{
		return Aprogram3053GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aprogram3053GameMode(Z_Construct_UClass_Aprogram3053GameMode, &Aprogram3053GameMode::StaticClass, TEXT("/Script/program3053"), TEXT("Aprogram3053GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aprogram3053GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
