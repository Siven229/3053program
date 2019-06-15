// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "program3053/BladeLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBladeLight() {}
// Cross Module References
	PROGRAM3053_API UClass* Z_Construct_UClass_ABladeLight_NoRegister();
	PROGRAM3053_API UClass* Z_Construct_UClass_ABladeLight();
	PROGRAM3053_API UClass* Z_Construct_UClass_Aprogram3053Projectile();
	UPackage* Z_Construct_UPackage__Script_program3053();
// End Cross Module References
	void ABladeLight::StaticRegisterNativesABladeLight()
	{
	}
	UClass* Z_Construct_UClass_ABladeLight_NoRegister()
	{
		return ABladeLight::StaticClass();
	}
	struct Z_Construct_UClass_ABladeLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABladeLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Aprogram3053Projectile,
		(UObject* (*)())Z_Construct_UPackage__Script_program3053,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABladeLight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BladeLight.h" },
		{ "ModuleRelativePath", "BladeLight.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABladeLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABladeLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABladeLight_Statics::ClassParams = {
		&ABladeLight::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABladeLight_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABladeLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABladeLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABladeLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABladeLight, 3561977596);
	template<> PROGRAM3053_API UClass* StaticClass<ABladeLight>()
	{
		return ABladeLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABladeLight(Z_Construct_UClass_ABladeLight, &ABladeLight::StaticClass, TEXT("/Script/program3053"), TEXT("ABladeLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABladeLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
