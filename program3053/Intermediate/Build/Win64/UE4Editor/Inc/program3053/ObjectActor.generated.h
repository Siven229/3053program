// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROGRAM3053_ObjectActor_generated_h
#error "ObjectActor.generated.h already included, missing '#pragma once' in ObjectActor.h"
#endif
#define PROGRAM3053_ObjectActor_generated_h

#define program3053_UE_program3053_Source_program3053_ObjectActor_h_15_RPC_WRAPPERS
#define program3053_UE_program3053_Source_program3053_ObjectActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define program3053_UE_program3053_Source_program3053_ObjectActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObjectActor(); \
	friend struct Z_Construct_UClass_AObjectActor_Statics; \
public: \
	DECLARE_CLASS(AObjectActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(AObjectActor)


#define program3053_UE_program3053_Source_program3053_ObjectActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAObjectActor(); \
	friend struct Z_Construct_UClass_AObjectActor_Statics; \
public: \
	DECLARE_CLASS(AObjectActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(AObjectActor)


#define program3053_UE_program3053_Source_program3053_ObjectActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObjectActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObjectActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjectActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjectActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObjectActor(AObjectActor&&); \
	NO_API AObjectActor(const AObjectActor&); \
public:


#define program3053_UE_program3053_Source_program3053_ObjectActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObjectActor(AObjectActor&&); \
	NO_API AObjectActor(const AObjectActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjectActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjectActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObjectActor)


#define program3053_UE_program3053_Source_program3053_ObjectActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AObjectActor, MeshComp); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(AObjectActor, SphereComp); }


#define program3053_UE_program3053_Source_program3053_ObjectActor_h_11_PROLOG
#define program3053_UE_program3053_Source_program3053_ObjectActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_UE_program3053_Source_program3053_ObjectActor_h_15_PRIVATE_PROPERTY_OFFSET \
	program3053_UE_program3053_Source_program3053_ObjectActor_h_15_RPC_WRAPPERS \
	program3053_UE_program3053_Source_program3053_ObjectActor_h_15_INCLASS \
	program3053_UE_program3053_Source_program3053_ObjectActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define program3053_UE_program3053_Source_program3053_ObjectActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_UE_program3053_Source_program3053_ObjectActor_h_15_PRIVATE_PROPERTY_OFFSET \
	program3053_UE_program3053_Source_program3053_ObjectActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	program3053_UE_program3053_Source_program3053_ObjectActor_h_15_INCLASS_NO_PURE_DECLS \
	program3053_UE_program3053_Source_program3053_ObjectActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGRAM3053_API UClass* StaticClass<class AObjectActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID program3053_UE_program3053_Source_program3053_ObjectActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
