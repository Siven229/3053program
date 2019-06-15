// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "program3053/Arrrow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrrow() {}
// Cross Module References
	PROGRAM3053_API UClass* Z_Construct_UClass_AArrrow_NoRegister();
	PROGRAM3053_API UClass* Z_Construct_UClass_AArrrow();
	PROGRAM3053_API UClass* Z_Construct_UClass_Aprogram3053Projectile();
	UPackage* Z_Construct_UPackage__Script_program3053();
// End Cross Module References
	void AArrrow::StaticRegisterNativesAArrrow()
	{
	}
	UClass* Z_Construct_UClass_AArrrow_NoRegister()
	{
		return AArrrow::StaticClass();
	}
	struct Z_Construct_UClass_AArrrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArrrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Aprogram3053Projectile,
		(UObject* (*)())Z_Construct_UPackage__Script_program3053,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArrrow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Arrrow.h" },
		{ "ModuleRelativePath", "Arrrow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArrrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArrrow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArrrow_Statics::ClassParams = {
		&AArrrow::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AArrrow_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AArrrow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArrrow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArrrow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArrrow, 2870319366);
	template<> PROGRAM3053_API UClass* StaticClass<AArrrow>()
	{
		return AArrrow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArrrow(Z_Construct_UClass_AArrrow, &AArrrow::StaticClass, TEXT("/Script/program3053"), TEXT("AArrrow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArrrow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
