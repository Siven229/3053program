// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PROGRAM3053_program3053Projectile_generated_h
#error "program3053Projectile.generated.h already included, missing '#pragma once' in program3053Projectile.h"
#endif
#define PROGRAM3053_program3053Projectile_generated_h

#define program3053_Source_program3053_program3053Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define program3053_Source_program3053_program3053Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define program3053_Source_program3053_program3053Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAprogram3053Projectile(); \
	friend struct Z_Construct_UClass_Aprogram3053Projectile_Statics; \
public: \
	DECLARE_CLASS(Aprogram3053Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(Aprogram3053Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define program3053_Source_program3053_program3053Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAprogram3053Projectile(); \
	friend struct Z_Construct_UClass_Aprogram3053Projectile_Statics; \
public: \
	DECLARE_CLASS(Aprogram3053Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(Aprogram3053Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define program3053_Source_program3053_program3053Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aprogram3053Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aprogram3053Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aprogram3053Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aprogram3053Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aprogram3053Projectile(Aprogram3053Projectile&&); \
	NO_API Aprogram3053Projectile(const Aprogram3053Projectile&); \
public:


#define program3053_Source_program3053_program3053Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aprogram3053Projectile(Aprogram3053Projectile&&); \
	NO_API Aprogram3053Projectile(const Aprogram3053Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aprogram3053Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aprogram3053Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aprogram3053Projectile)


#define program3053_Source_program3053_program3053Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(Aprogram3053Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(Aprogram3053Projectile, ProjectileMovement); }


#define program3053_Source_program3053_program3053Projectile_h_12_PROLOG
#define program3053_Source_program3053_program3053Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_Source_program3053_program3053Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	program3053_Source_program3053_program3053Projectile_h_15_RPC_WRAPPERS \
	program3053_Source_program3053_program3053Projectile_h_15_INCLASS \
	program3053_Source_program3053_program3053Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define program3053_Source_program3053_program3053Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_Source_program3053_program3053Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	program3053_Source_program3053_program3053Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	program3053_Source_program3053_program3053Projectile_h_15_INCLASS_NO_PURE_DECLS \
	program3053_Source_program3053_program3053Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGRAM3053_API UClass* StaticClass<class Aprogram3053Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID program3053_Source_program3053_program3053Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
