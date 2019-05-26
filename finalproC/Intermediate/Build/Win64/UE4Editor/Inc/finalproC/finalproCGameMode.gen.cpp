// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "finalproC/finalproCGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefinalproCGameMode() {}
// Cross Module References
	FINALPROC_API UClass* Z_Construct_UClass_AfinalproCGameMode_NoRegister();
	FINALPROC_API UClass* Z_Construct_UClass_AfinalproCGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_finalproC();
// End Cross Module References
	void AfinalproCGameMode::StaticRegisterNativesAfinalproCGameMode()
	{
	}
	UClass* Z_Construct_UClass_AfinalproCGameMode_NoRegister()
	{
		return AfinalproCGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AfinalproCGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AfinalproCGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_finalproC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AfinalproCGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "finalproCGameMode.h" },
		{ "ModuleRelativePath", "finalproCGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AfinalproCGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AfinalproCGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AfinalproCGameMode_Statics::ClassParams = {
		&AfinalproCGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AfinalproCGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AfinalproCGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AfinalproCGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AfinalproCGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AfinalproCGameMode, 2744631507);
	template<> FINALPROC_API UClass* StaticClass<AfinalproCGameMode>()
	{
		return AfinalproCGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AfinalproCGameMode(Z_Construct_UClass_AfinalproCGameMode, &AfinalproCGameMode::StaticClass, TEXT("/Script/finalproC"), TEXT("AfinalproCGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AfinalproCGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
