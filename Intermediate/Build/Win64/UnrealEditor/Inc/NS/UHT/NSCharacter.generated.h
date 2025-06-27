// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NSCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NS_NSCharacter_generated_h
#error "NSCharacter.generated.h already included, missing '#pragma once' in NSCharacter.h"
#endif
#define NS_NSCharacter_generated_h

#define FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_NSCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateHealth_Implementation(const float NewHealth); \
	DECLARE_FUNCTION(execUpdateHealth);


#define FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_NSCharacter_h_23_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_NSCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANSCharacter(); \
	friend struct Z_Construct_UClass_ANSCharacter_Statics; \
public: \
	DECLARE_CLASS(ANSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NS"), NO_API) \
	DECLARE_SERIALIZER(ANSCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ANSCharacter*>(this); }


#define FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_NSCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANSCharacter(ANSCharacter&&); \
	ANSCharacter(const ANSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANSCharacter) \
	NO_API virtual ~ANSCharacter();


#define FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_NSCharacter_h_20_PROLOG
#define FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_NSCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_NSCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_NSCharacter_h_23_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_NSCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_NSCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NS_API UClass* StaticClass<class ANSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_NSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
