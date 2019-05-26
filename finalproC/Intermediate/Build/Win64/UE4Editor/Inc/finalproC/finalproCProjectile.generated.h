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
#ifdef FINALPROC_finalproCProjectile_generated_h
#error "finalproCProjectile.generated.h already included, missing '#pragma once' in finalproCProjectile.h"
#endif
#define FINALPROC_finalproCProjectile_generated_h

#define finalproC_Source_finalproC_finalproCProjectile_h_15_RPC_WRAPPERS \
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


#define finalproC_Source_finalproC_finalproCProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define finalproC_Source_finalproC_finalproCProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAfinalproCProjectile(); \
	friend struct Z_Construct_UClass_AfinalproCProjectile_Statics; \
public: \
	DECLARE_CLASS(AfinalproCProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/finalproC"), NO_API) \
	DECLARE_SERIALIZER(AfinalproCProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define finalproC_Source_finalproC_finalproCProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAfinalproCProjectile(); \
	friend struct Z_Construct_UClass_AfinalproCProjectile_Statics; \
public: \
	DECLARE_CLASS(AfinalproCProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/finalproC"), NO_API) \
	DECLARE_SERIALIZER(AfinalproCProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define finalproC_Source_finalproC_finalproCProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AfinalproCProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AfinalproCProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AfinalproCProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AfinalproCProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AfinalproCProjectile(AfinalproCProjectile&&); \
	NO_API AfinalproCProjectile(const AfinalproCProjectile&); \
public:


#define finalproC_Source_finalproC_finalproCProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AfinalproCProjectile(AfinalproCProjectile&&); \
	NO_API AfinalproCProjectile(const AfinalproCProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AfinalproCProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AfinalproCProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AfinalproCProjectile)


#define finalproC_Source_finalproC_finalproCProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AfinalproCProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AfinalproCProjectile, ProjectileMovement); }


#define finalproC_Source_finalproC_finalproCProjectile_h_12_PROLOG
#define finalproC_Source_finalproC_finalproCProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	finalproC_Source_finalproC_finalproCProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	finalproC_Source_finalproC_finalproCProjectile_h_15_RPC_WRAPPERS \
	finalproC_Source_finalproC_finalproCProjectile_h_15_INCLASS \
	finalproC_Source_finalproC_finalproCProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define finalproC_Source_finalproC_finalproCProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	finalproC_Source_finalproC_finalproCProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	finalproC_Source_finalproC_finalproCProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	finalproC_Source_finalproC_finalproCProjectile_h_15_INCLASS_NO_PURE_DECLS \
	finalproC_Source_finalproC_finalproCProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROC_API UClass* StaticClass<class AfinalproCProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID finalproC_Source_finalproC_finalproCProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
