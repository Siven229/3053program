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
#ifdef PROGRAM3053_EnemyArrow_generated_h
#error "EnemyArrow.generated.h already included, missing '#pragma once' in EnemyArrow.h"
#endif
#define PROGRAM3053_EnemyArrow_generated_h

#define program3053_Source_program3053_EnemyArrow_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIncreaseInitialLifeSpan) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseInitialLifeSpan(); \
		P_NATIVE_END; \
	} \
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


#define program3053_Source_program3053_EnemyArrow_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIncreaseInitialLifeSpan) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseInitialLifeSpan(); \
		P_NATIVE_END; \
	} \
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


#define program3053_Source_program3053_EnemyArrow_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyArrow(); \
	friend struct Z_Construct_UClass_AEnemyArrow_Statics; \
public: \
	DECLARE_CLASS(AEnemyArrow, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(AEnemyArrow) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define program3053_Source_program3053_EnemyArrow_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyArrow(); \
	friend struct Z_Construct_UClass_AEnemyArrow_Statics; \
public: \
	DECLARE_CLASS(AEnemyArrow, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(AEnemyArrow) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define program3053_Source_program3053_EnemyArrow_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyArrow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyArrow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyArrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyArrow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyArrow(AEnemyArrow&&); \
	NO_API AEnemyArrow(const AEnemyArrow&); \
public:


#define program3053_Source_program3053_EnemyArrow_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyArrow(AEnemyArrow&&); \
	NO_API AEnemyArrow(const AEnemyArrow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyArrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyArrow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyArrow)


#define program3053_Source_program3053_EnemyArrow_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AEnemyArrow, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AEnemyArrow, ProjectileMovement); }


#define program3053_Source_program3053_EnemyArrow_h_12_PROLOG
#define program3053_Source_program3053_EnemyArrow_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_Source_program3053_EnemyArrow_h_15_PRIVATE_PROPERTY_OFFSET \
	program3053_Source_program3053_EnemyArrow_h_15_RPC_WRAPPERS \
	program3053_Source_program3053_EnemyArrow_h_15_INCLASS \
	program3053_Source_program3053_EnemyArrow_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define program3053_Source_program3053_EnemyArrow_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_Source_program3053_EnemyArrow_h_15_PRIVATE_PROPERTY_OFFSET \
	program3053_Source_program3053_EnemyArrow_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	program3053_Source_program3053_EnemyArrow_h_15_INCLASS_NO_PURE_DECLS \
	program3053_Source_program3053_EnemyArrow_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGRAM3053_API UClass* StaticClass<class AEnemyArrow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID program3053_Source_program3053_EnemyArrow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS