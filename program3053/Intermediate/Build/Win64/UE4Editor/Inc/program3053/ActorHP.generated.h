// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROGRAM3053_ActorHP_generated_h
#error "ActorHP.generated.h already included, missing '#pragma once' in ActorHP.h"
#endif
#define PROGRAM3053_ActorHP_generated_h

#define program3053_UE_program3053_Source_program3053_ActorHP_h_16_RPC_WRAPPERS
#define program3053_UE_program3053_Source_program3053_ActorHP_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define program3053_UE_program3053_Source_program3053_ActorHP_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActorHP(); \
	friend struct Z_Construct_UClass_AActorHP_Statics; \
public: \
	DECLARE_CLASS(AActorHP, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(AActorHP)


#define program3053_UE_program3053_Source_program3053_ActorHP_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAActorHP(); \
	friend struct Z_Construct_UClass_AActorHP_Statics; \
public: \
	DECLARE_CLASS(AActorHP, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(AActorHP)


#define program3053_UE_program3053_Source_program3053_ActorHP_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActorHP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActorHP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorHP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorHP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActorHP(AActorHP&&); \
	NO_API AActorHP(const AActorHP&); \
public:


#define program3053_UE_program3053_Source_program3053_ActorHP_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActorHP(AActorHP&&); \
	NO_API AActorHP(const AActorHP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorHP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorHP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActorHP)


#define program3053_UE_program3053_Source_program3053_ActorHP_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AActorHP, MeshComp); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(AActorHP, SphereComp); }


#define program3053_UE_program3053_Source_program3053_ActorHP_h_12_PROLOG
#define program3053_UE_program3053_Source_program3053_ActorHP_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_UE_program3053_Source_program3053_ActorHP_h_16_PRIVATE_PROPERTY_OFFSET \
	program3053_UE_program3053_Source_program3053_ActorHP_h_16_RPC_WRAPPERS \
	program3053_UE_program3053_Source_program3053_ActorHP_h_16_INCLASS \
	program3053_UE_program3053_Source_program3053_ActorHP_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define program3053_UE_program3053_Source_program3053_ActorHP_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_UE_program3053_Source_program3053_ActorHP_h_16_PRIVATE_PROPERTY_OFFSET \
	program3053_UE_program3053_Source_program3053_ActorHP_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	program3053_UE_program3053_Source_program3053_ActorHP_h_16_INCLASS_NO_PURE_DECLS \
	program3053_UE_program3053_Source_program3053_ActorHP_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGRAM3053_API UClass* StaticClass<class AActorHP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID program3053_UE_program3053_Source_program3053_ActorHP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
