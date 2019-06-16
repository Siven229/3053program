// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROGRAM3053_AiCharacter_generated_h
#error "AiCharacter.generated.h already included, missing '#pragma once' in AiCharacter.h"
#endif
#define PROGRAM3053_AiCharacter_generated_h

#define program3053_UE_program3053_Source_program3053_AiCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIncreaseDoubleDamageProbability) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseDoubleDamageProbability(); \
		P_NATIVE_END; \
	}


#define program3053_UE_program3053_Source_program3053_AiCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIncreaseDoubleDamageProbability) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseDoubleDamageProbability(); \
		P_NATIVE_END; \
	}


#define program3053_UE_program3053_Source_program3053_AiCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAiCharacter(); \
	friend struct Z_Construct_UClass_AAiCharacter_Statics; \
public: \
	DECLARE_CLASS(AAiCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(AAiCharacter)


#define program3053_UE_program3053_Source_program3053_AiCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAiCharacter(); \
	friend struct Z_Construct_UClass_AAiCharacter_Statics; \
public: \
	DECLARE_CLASS(AAiCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(AAiCharacter)


#define program3053_UE_program3053_Source_program3053_AiCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAiCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAiCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAiCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAiCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAiCharacter(AAiCharacter&&); \
	NO_API AAiCharacter(const AAiCharacter&); \
public:


#define program3053_UE_program3053_Source_program3053_AiCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAiCharacter(AAiCharacter&&); \
	NO_API AAiCharacter(const AAiCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAiCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAiCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAiCharacter)


#define program3053_UE_program3053_Source_program3053_AiCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define program3053_UE_program3053_Source_program3053_AiCharacter_h_9_PROLOG
#define program3053_UE_program3053_Source_program3053_AiCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_UE_program3053_Source_program3053_AiCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	program3053_UE_program3053_Source_program3053_AiCharacter_h_12_RPC_WRAPPERS \
	program3053_UE_program3053_Source_program3053_AiCharacter_h_12_INCLASS \
	program3053_UE_program3053_Source_program3053_AiCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define program3053_UE_program3053_Source_program3053_AiCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_UE_program3053_Source_program3053_AiCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	program3053_UE_program3053_Source_program3053_AiCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	program3053_UE_program3053_Source_program3053_AiCharacter_h_12_INCLASS_NO_PURE_DECLS \
	program3053_UE_program3053_Source_program3053_AiCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGRAM3053_API UClass* StaticClass<class AAiCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID program3053_UE_program3053_Source_program3053_AiCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
