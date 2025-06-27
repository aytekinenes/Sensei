// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseActorAttributes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef NS_BaseActorAttributes_generated_h
#error "BaseActorAttributes.generated.h already included, missing '#pragma once' in BaseActorAttributes.h"
#endif
#define NS_BaseActorAttributes_generated_h

#define FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_BaseActorAttributes_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_BaseActorAttributes_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseActorAttributes(); \
	friend struct Z_Construct_UClass_UBaseActorAttributes_Statics; \
public: \
	DECLARE_CLASS(UBaseActorAttributes, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NS"), NO_API) \
	DECLARE_SERIALIZER(UBaseActorAttributes) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UBaseActorAttributes) \
public:


#define FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_BaseActorAttributes_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseActorAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseActorAttributes(UBaseActorAttributes&&); \
	UBaseActorAttributes(const UBaseActorAttributes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseActorAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseActorAttributes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseActorAttributes) \
	NO_API virtual ~UBaseActorAttributes();


#define FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_BaseActorAttributes_h_21_PROLOG
#define FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_BaseActorAttributes_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_BaseActorAttributes_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_BaseActorAttributes_h_24_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_BaseActorAttributes_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NS_API UClass* StaticClass<class UBaseActorAttributes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_BaseActorAttributes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
