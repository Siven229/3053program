// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROGRAM3053_ActorTrap_generated_h
#error "ActorTrap.generated.h already included, missing '#pragma once' in ActorTrap.h"
#endif
#define PROGRAM3053_ActorTrap_generated_h

#define program3053_Source_program3053_ActorTrap_h_14_RPC_WRAPPERS
#define program3053_Source_program3053_ActorTrap_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define program3053_Source_program3053_ActorTrap_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActorTrap(); \
	friend struct Z_Construct_UClass_AActorTrap_Statics; \
public: \
	DECLARE_CLASS(AActorTrap, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(AActorTrap)


#define program3053_Source_program3053_ActorTrap_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAActorTrap(); \
	friend struct Z_Construct_UClass_AActorTrap_Statics; \
public: \
	DECLARE_CLASS(AActorTrap, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(AActorTrap)


#define program3053_Source_program3053_ActorTrap_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActorTrap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActorTrap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorTrap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActorTrap(AActorTrap&&); \
	NO_API AActorTrap(const AActorTrap&); \
public:


#define program3053_Source_program3053_ActorTrap_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActorTrap(AActorTrap&&); \
	NO_API AActorTrap(const AActorTrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorTrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActorTrap)


#define program3053_Source_program3053_ActorTrap_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AActorTrap, MeshComp); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(AActorTrap, SphereComp); }


#define program3053_Source_program3053_ActorTrap_h_11_PROLOG
#define program3053_Source_program3053_ActorTrap_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_Source_program3053_ActorTrap_h_14_PRIVATE_PROPERTY_OFFSET \
	program3053_Source_program3053_ActorTrap_h_14_RPC_WRAPPERS \
	program3053_Source_program3053_ActorTrap_h_14_INCLASS \
	program3053_Source_program3053_ActorTrap_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define program3053_Source_program3053_ActorTrap_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_Source_program3053_ActorTrap_h_14_PRIVATE_PROPERTY_OFFSET \
	program3053_Source_program3053_ActorTrap_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	program3053_Source_program3053_ActorTrap_h_14_INCLASS_NO_PURE_DECLS \
	program3053_Source_program3053_ActorTrap_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGRAM3053_API UClass* StaticClass<class AActorTrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID program3053_Source_program3053_ActorTrap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
