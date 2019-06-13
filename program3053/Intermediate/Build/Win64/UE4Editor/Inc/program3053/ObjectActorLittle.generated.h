// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROGRAM3053_ObjectActorLittle_generated_h
#error "ObjectActorLittle.generated.h already included, missing '#pragma once' in ObjectActorLittle.h"
#endif
#define PROGRAM3053_ObjectActorLittle_generated_h

#define program3053_Source_program3053_ObjectActorLittle_h_15_RPC_WRAPPERS
#define program3053_Source_program3053_ObjectActorLittle_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define program3053_Source_program3053_ObjectActorLittle_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObjectActorLittle(); \
	friend struct Z_Construct_UClass_AObjectActorLittle_Statics; \
public: \
	DECLARE_CLASS(AObjectActorLittle, AObjectActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(AObjectActorLittle)


#define program3053_Source_program3053_ObjectActorLittle_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAObjectActorLittle(); \
	friend struct Z_Construct_UClass_AObjectActorLittle_Statics; \
public: \
	DECLARE_CLASS(AObjectActorLittle, AObjectActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(AObjectActorLittle)


#define program3053_Source_program3053_ObjectActorLittle_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObjectActorLittle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObjectActorLittle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjectActorLittle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjectActorLittle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObjectActorLittle(AObjectActorLittle&&); \
	NO_API AObjectActorLittle(const AObjectActorLittle&); \
public:


#define program3053_Source_program3053_ObjectActorLittle_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObjectActorLittle() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObjectActorLittle(AObjectActorLittle&&); \
	NO_API AObjectActorLittle(const AObjectActorLittle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObjectActorLittle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObjectActorLittle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObjectActorLittle)


#define program3053_Source_program3053_ObjectActorLittle_h_15_PRIVATE_PROPERTY_OFFSET
#define program3053_Source_program3053_ObjectActorLittle_h_12_PROLOG
#define program3053_Source_program3053_ObjectActorLittle_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_Source_program3053_ObjectActorLittle_h_15_PRIVATE_PROPERTY_OFFSET \
	program3053_Source_program3053_ObjectActorLittle_h_15_RPC_WRAPPERS \
	program3053_Source_program3053_ObjectActorLittle_h_15_INCLASS \
	program3053_Source_program3053_ObjectActorLittle_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define program3053_Source_program3053_ObjectActorLittle_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_Source_program3053_ObjectActorLittle_h_15_PRIVATE_PROPERTY_OFFSET \
	program3053_Source_program3053_ObjectActorLittle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	program3053_Source_program3053_ObjectActorLittle_h_15_INCLASS_NO_PURE_DECLS \
	program3053_Source_program3053_ObjectActorLittle_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGRAM3053_API UClass* StaticClass<class AObjectActorLittle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID program3053_Source_program3053_ObjectActorLittle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
