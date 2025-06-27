// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NS/NSGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNSGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NS_API UClass* Z_Construct_UClass_ANSGameMode();
NS_API UClass* Z_Construct_UClass_ANSGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NS();
// End Cross Module References

// Begin Class ANSGameMode
void ANSGameMode::StaticRegisterNativesANSGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANSGameMode);
UClass* Z_Construct_UClass_ANSGameMode_NoRegister()
{
	return ANSGameMode::StaticClass();
}
struct Z_Construct_UClass_ANSGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NSGameMode.h" },
		{ "ModuleRelativePath", "NSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANSGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANSGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANSGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANSGameMode_Statics::ClassParams = {
	&ANSGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANSGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANSGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANSGameMode()
{
	if (!Z_Registration_Info_UClass_ANSGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANSGameMode.OuterSingleton, Z_Construct_UClass_ANSGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANSGameMode.OuterSingleton;
}
template<> NS_API UClass* StaticClass<ANSGameMode>()
{
	return ANSGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANSGameMode);
ANSGameMode::~ANSGameMode() {}
// End Class ANSGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_NSGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANSGameMode, ANSGameMode::StaticClass, TEXT("ANSGameMode"), &Z_Registration_Info_UClass_ANSGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANSGameMode), 2145254438U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_NSGameMode_h_98559664(TEXT("/Script/NS"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_NSGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_NSGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
