// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "program3053/ObjectActorLittle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectActorLittle() {}
// Cross Module References
	PROGRAM3053_API UClass* Z_Construct_UClass_AObjectActorLittle_NoRegister();
	PROGRAM3053_API UClass* Z_Construct_UClass_AObjectActorLittle();
	PROGRAM3053_API UClass* Z_Construct_UClass_AObjectActor();
	UPackage* Z_Construct_UPackage__Script_program3053();
// End Cross Module References
	void AObjectActorLittle::StaticRegisterNativesAObjectActorLittle()
	{
	}
	UClass* Z_Construct_UClass_AObjectActorLittle_NoRegister()
	{
		return AObjectActorLittle::StaticClass();
	}
	struct Z_Construct_UClass_AObjectActorLittle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjectActorLittle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObjectActor,
		(UObject* (*)())Z_Construct_UPackage__Script_program3053,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectActorLittle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectActorLittle.h" },
		{ "ModuleRelativePath", "ObjectActorLittle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjectActorLittle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjectActorLittle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjectActorLittle_Statics::ClassParams = {
		&AObjectActorLittle::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObjectActorLittle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AObjectActorLittle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjectActorLittle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjectActorLittle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjectActorLittle, 3589118453);
	template<> PROGRAM3053_API UClass* StaticClass<AObjectActorLittle>()
	{
		return AObjectActorLittle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjectActorLittle(Z_Construct_UClass_AObjectActorLittle, &AObjectActorLittle::StaticClass, TEXT("/Script/program3053"), TEXT("AObjectActorLittle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjectActorLittle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
