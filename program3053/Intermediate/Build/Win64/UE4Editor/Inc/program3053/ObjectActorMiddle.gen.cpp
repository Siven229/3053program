// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "program3053/ObjectActorMiddle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectActorMiddle() {}
// Cross Module References
	PROGRAM3053_API UClass* Z_Construct_UClass_AObjectActorMiddle_NoRegister();
	PROGRAM3053_API UClass* Z_Construct_UClass_AObjectActorMiddle();
	PROGRAM3053_API UClass* Z_Construct_UClass_AObjectActor();
	UPackage* Z_Construct_UPackage__Script_program3053();
// End Cross Module References
	void AObjectActorMiddle::StaticRegisterNativesAObjectActorMiddle()
	{
	}
	UClass* Z_Construct_UClass_AObjectActorMiddle_NoRegister()
	{
		return AObjectActorMiddle::StaticClass();
	}
	struct Z_Construct_UClass_AObjectActorMiddle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjectActorMiddle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObjectActor,
		(UObject* (*)())Z_Construct_UPackage__Script_program3053,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectActorMiddle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectActorMiddle.h" },
		{ "ModuleRelativePath", "ObjectActorMiddle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjectActorMiddle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjectActorMiddle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjectActorMiddle_Statics::ClassParams = {
		&AObjectActorMiddle::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObjectActorMiddle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AObjectActorMiddle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjectActorMiddle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjectActorMiddle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjectActorMiddle, 3962385015);
	template<> PROGRAM3053_API UClass* StaticClass<AObjectActorMiddle>()
	{
		return AObjectActorMiddle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjectActorMiddle(Z_Construct_UClass_AObjectActorMiddle, &AObjectActorMiddle::StaticClass, TEXT("/Script/program3053"), TEXT("AObjectActorMiddle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjectActorMiddle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif