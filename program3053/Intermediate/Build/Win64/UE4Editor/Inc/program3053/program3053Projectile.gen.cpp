// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "program3053/program3053Projectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeprogram3053Projectile() {}
// Cross Module References
	PROGRAM3053_API UClass* Z_Construct_UClass_Aprogram3053Projectile_NoRegister();
	PROGRAM3053_API UClass* Z_Construct_UClass_Aprogram3053Projectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_program3053();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_Aprogram3053Projectile_IncreaseInitialLifeSpan();
	PROGRAM3053_API UFunction* Z_Construct_UFunction_Aprogram3053Projectile_OnHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void Aprogram3053Projectile::StaticRegisterNativesAprogram3053Projectile()
	{
		UClass* Class = Aprogram3053Projectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IncreaseInitialLifeSpan", &Aprogram3053Projectile::execIncreaseInitialLifeSpan },
			{ "OnHit", &Aprogram3053Projectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Aprogram3053Projectile_IncreaseInitialLifeSpan_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aprogram3053Projectile_IncreaseInitialLifeSpan_Statics::Function_MetaDataParams[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aprogram3053Projectile_IncreaseInitialLifeSpan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aprogram3053Projectile, nullptr, "IncreaseInitialLifeSpan", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aprogram3053Projectile_IncreaseInitialLifeSpan_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_Aprogram3053Projectile_IncreaseInitialLifeSpan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aprogram3053Projectile_IncreaseInitialLifeSpan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aprogram3053Projectile_IncreaseInitialLifeSpan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics
	{
		struct program3053Projectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(program3053Projectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(program3053Projectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(program3053Projectile_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(program3053Projectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(program3053Projectile_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_HitComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::NewProp_HitComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "program3053Projectile.h" },
		{ "ToolTip", "Function to handle the projectile hitting something" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aprogram3053Projectile, nullptr, "OnHit", sizeof(program3053Projectile_eventOnHit_Parms), Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aprogram3053Projectile_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aprogram3053Projectile_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Aprogram3053Projectile_NoRegister()
	{
		return Aprogram3053Projectile::StaticClass();
	}
	struct Z_Construct_UClass_Aprogram3053Projectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddInitialLifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddInitialLifeSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aprogram3053Projectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_program3053,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Aprogram3053Projectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Aprogram3053Projectile_IncreaseInitialLifeSpan, "IncreaseInitialLifeSpan" }, // 531882358
		{ &Z_Construct_UFunction_Aprogram3053Projectile_OnHit, "OnHit" }, // 3779114312
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Projectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "program3053Projectile.h" },
		{ "ModuleRelativePath", "program3053Projectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Projectile_Statics::NewProp_AddInitialLifeSpan_MetaData[] = {
		{ "Category", "property" },
		{ "ModuleRelativePath", "program3053Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aprogram3053Projectile_Statics::NewProp_AddInitialLifeSpan = { "AddInitialLifeSpan", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Projectile, AddInitialLifeSpan), METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Projectile_Statics::NewProp_AddInitialLifeSpan_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Projectile_Statics::NewProp_AddInitialLifeSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Projectile_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "program3053Projectile.h" },
		{ "ToolTip", "Projectile movement component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aprogram3053Projectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Projectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Projectile_Statics::NewProp_ProjectileMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Projectile_Statics::NewProp_ProjectileMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprogram3053Projectile_Statics::NewProp_ProjectileMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "program3053Projectile.h" },
		{ "ToolTip", "Sphere collision component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aprogram3053Projectile_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aprogram3053Projectile, ProjectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Projectile_Statics::NewProp_ProjectileMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Projectile_Statics::NewProp_ProjectileMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aprogram3053Projectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Projectile_Statics::NewProp_AddInitialLifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Projectile_Statics::NewProp_ProjectileMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprogram3053Projectile_Statics::NewProp_ProjectileMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aprogram3053Projectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aprogram3053Projectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aprogram3053Projectile_Statics::ClassParams = {
		&Aprogram3053Projectile::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Aprogram3053Projectile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Projectile_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_Aprogram3053Projectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Aprogram3053Projectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aprogram3053Projectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aprogram3053Projectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aprogram3053Projectile, 1364417676);
	template<> PROGRAM3053_API UClass* StaticClass<Aprogram3053Projectile>()
	{
		return Aprogram3053Projectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aprogram3053Projectile(Z_Construct_UClass_Aprogram3053Projectile, &Aprogram3053Projectile::StaticClass, TEXT("/Script/program3053"), TEXT("Aprogram3053Projectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aprogram3053Projectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
