// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROGRAM3053_BladeLight_generated_h
#error "BladeLight.generated.h already included, missing '#pragma once' in BladeLight.h"
#endif
#define PROGRAM3053_BladeLight_generated_h

#define program3053_Source_program3053_BladeLight_h_15_RPC_WRAPPERS
#define program3053_Source_program3053_BladeLight_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define program3053_Source_program3053_BladeLight_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABladeLight(); \
	friend struct Z_Construct_UClass_ABladeLight_Statics; \
public: \
	DECLARE_CLASS(ABladeLight, Aprogram3053Projectile, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(ABladeLight)


#define program3053_Source_program3053_BladeLight_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABladeLight(); \
	friend struct Z_Construct_UClass_ABladeLight_Statics; \
public: \
	DECLARE_CLASS(ABladeLight, Aprogram3053Projectile, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(ABladeLight)


#define program3053_Source_program3053_BladeLight_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABladeLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABladeLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABladeLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABladeLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABladeLight(ABladeLight&&); \
	NO_API ABladeLight(const ABladeLight&); \
public:


#define program3053_Source_program3053_BladeLight_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABladeLight() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABladeLight(ABladeLight&&); \
	NO_API ABladeLight(const ABladeLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABladeLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABladeLight); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABladeLight)


#define program3053_Source_program3053_BladeLight_h_15_PRIVATE_PROPERTY_OFFSET
#define program3053_Source_program3053_BladeLight_h_12_PROLOG
#define program3053_Source_program3053_BladeLight_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_Source_program3053_BladeLight_h_15_PRIVATE_PROPERTY_OFFSET \
	program3053_Source_program3053_BladeLight_h_15_RPC_WRAPPERS \
	program3053_Source_program3053_BladeLight_h_15_INCLASS \
	program3053_Source_program3053_BladeLight_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define program3053_Source_program3053_BladeLight_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_Source_program3053_BladeLight_h_15_PRIVATE_PROPERTY_OFFSET \
	program3053_Source_program3053_BladeLight_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	program3053_Source_program3053_BladeLight_h_15_INCLASS_NO_PURE_DECLS \
	program3053_Source_program3053_BladeLight_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGRAM3053_API UClass* StaticClass<class ABladeLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID program3053_Source_program3053_BladeLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
