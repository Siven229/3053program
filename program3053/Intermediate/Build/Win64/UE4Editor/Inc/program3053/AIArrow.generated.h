// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROGRAM3053_AIArrow_generated_h
#error "AIArrow.generated.h already included, missing '#pragma once' in AIArrow.h"
#endif
#define PROGRAM3053_AIArrow_generated_h

#define program3053_Source_program3053_AIArrow_h_15_RPC_WRAPPERS
#define program3053_Source_program3053_AIArrow_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define program3053_Source_program3053_AIArrow_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIArrow(); \
	friend struct Z_Construct_UClass_AAIArrow_Statics; \
public: \
	DECLARE_CLASS(AAIArrow, Aprogram3053Projectile, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(AAIArrow)


#define program3053_Source_program3053_AIArrow_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAIArrow(); \
	friend struct Z_Construct_UClass_AAIArrow_Statics; \
public: \
	DECLARE_CLASS(AAIArrow, Aprogram3053Projectile, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(AAIArrow)


#define program3053_Source_program3053_AIArrow_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIArrow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIArrow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIArrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIArrow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIArrow(AAIArrow&&); \
	NO_API AAIArrow(const AAIArrow&); \
public:


#define program3053_Source_program3053_AIArrow_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIArrow() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIArrow(AAIArrow&&); \
	NO_API AAIArrow(const AAIArrow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIArrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIArrow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIArrow)


#define program3053_Source_program3053_AIArrow_h_15_PRIVATE_PROPERTY_OFFSET
#define program3053_Source_program3053_AIArrow_h_12_PROLOG
#define program3053_Source_program3053_AIArrow_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_Source_program3053_AIArrow_h_15_PRIVATE_PROPERTY_OFFSET \
	program3053_Source_program3053_AIArrow_h_15_RPC_WRAPPERS \
	program3053_Source_program3053_AIArrow_h_15_INCLASS \
	program3053_Source_program3053_AIArrow_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define program3053_Source_program3053_AIArrow_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_Source_program3053_AIArrow_h_15_PRIVATE_PROPERTY_OFFSET \
	program3053_Source_program3053_AIArrow_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	program3053_Source_program3053_AIArrow_h_15_INCLASS_NO_PURE_DECLS \
	program3053_Source_program3053_AIArrow_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGRAM3053_API UClass* StaticClass<class AAIArrow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID program3053_Source_program3053_AIArrow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
