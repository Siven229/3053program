// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALPROC_finalproCPawn_generated_h
#error "finalproCPawn.generated.h already included, missing '#pragma once' in finalproCPawn.h"
#endif
#define FINALPROC_finalproCPawn_generated_h

#define finalproC_Source_finalproC_finalproCPawn_h_12_RPC_WRAPPERS
#define finalproC_Source_finalproC_finalproCPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define finalproC_Source_finalproC_finalproCPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAfinalproCPawn(); \
	friend struct Z_Construct_UClass_AfinalproCPawn_Statics; \
public: \
	DECLARE_CLASS(AfinalproCPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/finalproC"), NO_API) \
	DECLARE_SERIALIZER(AfinalproCPawn)


#define finalproC_Source_finalproC_finalproCPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAfinalproCPawn(); \
	friend struct Z_Construct_UClass_AfinalproCPawn_Statics; \
public: \
	DECLARE_CLASS(AfinalproCPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/finalproC"), NO_API) \
	DECLARE_SERIALIZER(AfinalproCPawn)


#define finalproC_Source_finalproC_finalproCPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AfinalproCPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AfinalproCPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AfinalproCPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AfinalproCPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AfinalproCPawn(AfinalproCPawn&&); \
	NO_API AfinalproCPawn(const AfinalproCPawn&); \
public:


#define finalproC_Source_finalproC_finalproCPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AfinalproCPawn(AfinalproCPawn&&); \
	NO_API AfinalproCPawn(const AfinalproCPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AfinalproCPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AfinalproCPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AfinalproCPawn)


#define finalproC_Source_finalproC_finalproCPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(AfinalproCPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AfinalproCPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AfinalproCPawn, CameraBoom); }


#define finalproC_Source_finalproC_finalproCPawn_h_9_PROLOG
#define finalproC_Source_finalproC_finalproCPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	finalproC_Source_finalproC_finalproCPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	finalproC_Source_finalproC_finalproCPawn_h_12_RPC_WRAPPERS \
	finalproC_Source_finalproC_finalproCPawn_h_12_INCLASS \
	finalproC_Source_finalproC_finalproCPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define finalproC_Source_finalproC_finalproCPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	finalproC_Source_finalproC_finalproCPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	finalproC_Source_finalproC_finalproCPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	finalproC_Source_finalproC_finalproCPawn_h_12_INCLASS_NO_PURE_DECLS \
	finalproC_Source_finalproC_finalproCPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROC_API UClass* StaticClass<class AfinalproCPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID finalproC_Source_finalproC_finalproCPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
