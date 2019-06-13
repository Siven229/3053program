// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "program3053/ActorHPLittle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorHPLittle() {}
// Cross Module References
	PROGRAM3053_API UClass* Z_Construct_UClass_AActorHPLittle_NoRegister();
	PROGRAM3053_API UClass* Z_Construct_UClass_AActorHPLittle();
	PROGRAM3053_API UClass* Z_Construct_UClass_AActorHP();
	UPackage* Z_Construct_UPackage__Script_program3053();
// End Cross Module References
	void AActorHPLittle::StaticRegisterNativesAActorHPLittle()
	{
	}
	UClass* Z_Construct_UClass_AActorHPLittle_NoRegister()
	{
		return AActorHPLittle::StaticClass();
	}
	struct Z_Construct_UClass_AActorHPLittle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorHPLittle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActorHP,
		(UObject* (*)())Z_Construct_UPackage__Script_program3053,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorHPLittle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorHPLittle.h" },
		{ "ModuleRelativePath", "ActorHPLittle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorHPLittle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorHPLittle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActorHPLittle_Statics::ClassParams = {
		&AActorHPLittle::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AActorHPLittle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AActorHPLittle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorHPLittle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActorHPLittle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActorHPLittle, 560701177);
	template<> PROGRAM3053_API UClass* StaticClass<AActorHPLittle>()
	{
		return AActorHPLittle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActorHPLittle(Z_Construct_UClass_AActorHPLittle, &AActorHPLittle::StaticClass, TEXT("/Script/program3053"), TEXT("AActorHPLittle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorHPLittle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
