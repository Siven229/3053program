// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "program3053/program3053Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeprogram3053Controller() {}
// Cross Module References
	PROGRAM3053_API UClass* Z_Construct_UClass_Aprogram3053Controller_NoRegister();
	PROGRAM3053_API UClass* Z_Construct_UClass_Aprogram3053Controller();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_program3053();
// End Cross Module References
	void Aprogram3053Controller::StaticRegisterNativesAprogram3053Controller()
	{
	}
	UClass* Z_Construct_UClass_Aprogram3053Controller_NoRegister()
	{
		return Aprogram3053Controller::StaticClass();
	}
	struct Z_Construct_UClass_Aprogram3053Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aprogram3053Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_program3053,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Controller_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "program3053Controller.h" },
		{ "ModuleRelativePath", "program3053Controller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aprogram3053Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aprogram3053Controller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aprogram3053Controller_Statics::ClassParams = {
		&Aprogram3053Controller::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Controller_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aprogram3053Controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aprogram3053Controller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aprogram3053Controller, 2875947140);
	template<> PROGRAM3053_API UClass* StaticClass<Aprogram3053Controller>()
	{
		return Aprogram3053Controller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aprogram3053Controller(Z_Construct_UClass_Aprogram3053Controller, &Aprogram3053Controller::StaticClass, TEXT("/Script/program3053"), TEXT("Aprogram3053Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aprogram3053Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
