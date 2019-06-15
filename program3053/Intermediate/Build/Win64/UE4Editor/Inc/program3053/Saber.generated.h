// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef PROGRAM3053_Saber_generated_h
#error "Saber.generated.h already included, missing '#pragma once' in Saber.h"
#endif
#define PROGRAM3053_Saber_generated_h

#define program3053_Source_program3053_Saber_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIncreaeeDefendArrowPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaeeDefendArrowPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseDefensivePower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseDefensivePower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseAcquiredHP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseAcquiredHP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseAcquiredEXP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseAcquiredEXP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseHPMax) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseHPMax(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseMoveSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseMoveSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecreaseSkillPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DecreaseSkillPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseArrowNumber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseArrowNumber(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireShot) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_FireDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireShot(Z_Param_FireDirection); \
		P_NATIVE_END; \
	}


#define program3053_Source_program3053_Saber_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIncreaeeDefendArrowPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaeeDefendArrowPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseDefensivePower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseDefensivePower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseAcquiredHP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseAcquiredHP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseAcquiredEXP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseAcquiredEXP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseHPMax) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseHPMax(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseMoveSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseMoveSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecreaseSkillPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DecreaseSkillPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseArrowNumber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseArrowNumber(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireShot) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_FireDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireShot(Z_Param_FireDirection); \
		P_NATIVE_END; \
	}


#define program3053_Source_program3053_Saber_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASaber(); \
	friend struct Z_Construct_UClass_ASaber_Statics; \
public: \
	DECLARE_CLASS(ASaber, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(ASaber)


#define program3053_Source_program3053_Saber_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASaber(); \
	friend struct Z_Construct_UClass_ASaber_Statics; \
public: \
	DECLARE_CLASS(ASaber, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/program3053"), NO_API) \
	DECLARE_SERIALIZER(ASaber)


#define program3053_Source_program3053_Saber_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASaber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASaber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASaber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASaber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASaber(ASaber&&); \
	NO_API ASaber(const ASaber&); \
public:


#define program3053_Source_program3053_Saber_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASaber(ASaber&&); \
	NO_API ASaber(const ASaber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASaber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASaber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASaber)


#define program3053_Source_program3053_Saber_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(ASaber, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ASaber, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASaber, CameraBoom); }


#define program3053_Source_program3053_Saber_h_12_PROLOG
#define program3053_Source_program3053_Saber_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_Source_program3053_Saber_h_15_PRIVATE_PROPERTY_OFFSET \
	program3053_Source_program3053_Saber_h_15_RPC_WRAPPERS \
	program3053_Source_program3053_Saber_h_15_INCLASS \
	program3053_Source_program3053_Saber_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define program3053_Source_program3053_Saber_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	program3053_Source_program3053_Saber_h_15_PRIVATE_PROPERTY_OFFSET \
	program3053_Source_program3053_Saber_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	program3053_Source_program3053_Saber_h_15_INCLASS_NO_PURE_DECLS \
	program3053_Source_program3053_Saber_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGRAM3053_API UClass* StaticClass<class ASaber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID program3053_Source_program3053_Saber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS