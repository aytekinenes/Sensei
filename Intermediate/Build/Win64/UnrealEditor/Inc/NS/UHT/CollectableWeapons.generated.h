// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CollectableWeapons.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NS_CollectableWeapons_generated_h
#error "CollectableWeapons.generated.h already included, missing '#pragma once' in CollectableWeapons.h"
#endif
#define NS_CollectableWeapons_generated_h

#define FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_CollectableWeapons_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_CollectableWeapons_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectableWeapons(); \
	friend struct Z_Construct_UClass_ACollectableWeapons_Statics; \
public: \
	DECLARE_CLASS(ACollectableWeapons, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NS"), NO_API) \
	DECLARE_SERIALIZER(ACollectableWeapons)


#define FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_CollectableWeapons_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACollectableWeapons(ACollectableWeapons&&); \
	ACollectableWeapons(const ACollectableWeapons&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectableWeapons); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectableWeapons); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectableWeapons) \
	NO_API virtual ~ACollectableWeapons();


#define FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_CollectableWeapons_h_12_PROLOG
#define FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_CollectableWeapons_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_CollectableWeapons_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_CollectableWeapons_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_CollectableWeapons_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NS_API UClass* StaticClass<class ACollectableWeapons>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_CollectableWeapons_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
