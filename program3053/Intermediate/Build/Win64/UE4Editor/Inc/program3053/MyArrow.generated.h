// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROGRAM3053_MyArrow_generated_h
#error "MyArrow.generated.h already included, missing '#pragma once' in MyArrow.h"
#endif
#define PROGRAM3053_MyArrow_generated_h

#define program3053_Source_program3053_MyArrow_h_15_RPC_WRAPPERS
#define program3053_Source_program3053_MyArrow_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define program3053_Source_program3053_MyArrow_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyArrow(); \
	friend struct Z_Construct_UClass_AMyArrow_Statics; \
public: \
	DECLARE_CLASS(AMyArrow, Aprogram3053Projectile, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(AMyArrow)


#define program3053_Source_program3053_MyArrow_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyArrow(); \
	friend struct Z_Construct_UClass_AMyArrow_Statics; \
public: \
	DECLARE_CLASS(AMyArrow, Aprogram3053Projectile, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(AMyArrow)


#define program3053_Source_program3053_MyArrow_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyArrow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyArrow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyArrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyArrow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyArrow(AMyArrow&&); \
	NO_API AMyArrow(const AMyArrow&); \
public:


#define program3053_Source_program3053_MyArrow_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyArrow() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyArrow(AMyArrow&&); \
	NO_API AMyArrow(const AMyArrow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyArrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyArrow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyArrow)


#define program3053_Source_program3053_MyArrow_h_15_PRIVATE_PROPERTY_OFFSET
#define program3053_Source_program3053_MyArrow_h_12_PROLOG
#define program3053_Source_program3053_MyArrow_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_Source_program3053_MyArrow_h_15_PRIVATE_PROPERTY_OFFSET \
	program3053_Source_program3053_MyArrow_h_15_RPC_WRAPPERS \
	program3053_Source_program3053_MyArrow_h_15_INCLASS \
	program3053_Source_program3053_MyArrow_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define program3053_Source_program3053_MyArrow_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_Source_program3053_MyArrow_h_15_PRIVATE_PROPERTY_OFFSET \
	program3053_Source_program3053_MyArrow_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	program3053_Source_program3053_MyArrow_h_15_INCLASS_NO_PURE_DECLS \
	program3053_Source_program3053_MyArrow_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGRAM3053_API UClass* StaticClass<class AMyArrow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID program3053_Source_program3053_MyArrow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
