// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NS/BaseActorAttributes.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseActorAttributes() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
NS_API UClass* Z_Construct_UClass_UBaseActorAttributes();
NS_API UClass* Z_Construct_UClass_UBaseActorAttributes_NoRegister();
UPackage* Z_Construct_UPackage__Script_NS();
// End Cross Module References

// Begin Class UBaseActorAttributes Function OnRep_Health
struct Z_Construct_UFunction_UBaseActorAttributes_OnRep_Health_Statics
{
	struct BaseActorAttributes_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseActorAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseActorAttributes_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseActorAttributes_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseActorAttributes_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseActorAttributes_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseActorAttributes_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseActorAttributes_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseActorAttributes, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UBaseActorAttributes_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseActorAttributes_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseActorAttributes_OnRep_Health_Statics::BaseActorAttributes_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseActorAttributes_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseActorAttributes_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseActorAttributes_OnRep_Health_Statics::BaseActorAttributes_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseActorAttributes_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseActorAttributes_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseActorAttributes::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// End Class UBaseActorAttributes Function OnRep_Health

// Begin Class UBaseActorAttributes
void UBaseActorAttributes::StaticRegisterNativesUBaseActorAttributes()
{
	UClass* Class = UBaseActorAttributes::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Health", &UBaseActorAttributes::execOnRep_Health },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseActorAttributes);
UClass* Z_Construct_UClass_UBaseActorAttributes_NoRegister()
{
	return UBaseActorAttributes::StaticClass();
}
struct Z_Construct_UClass_UBaseActorAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BaseActorAttributes.h" },
		{ "ModuleRelativePath", "BaseActorAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Base Actor Attributes" },
		{ "ModuleRelativePath", "BaseActorAttributes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseActorAttributes_OnRep_Health, "OnRep_Health" }, // 1618108339
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseActorAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseActorAttributes_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseActorAttributes, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseActorAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseActorAttributes_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseActorAttributes_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseActorAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_NS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseActorAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseActorAttributes_Statics::ClassParams = {
	&UBaseActorAttributes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseActorAttributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseActorAttributes_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseActorAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseActorAttributes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseActorAttributes()
{
	if (!Z_Registration_Info_UClass_UBaseActorAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseActorAttributes.OuterSingleton, Z_Construct_UClass_UBaseActorAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseActorAttributes.OuterSingleton;
}
template<> NS_API UClass* StaticClass<UBaseActorAttributes>()
{
	return UBaseActorAttributes::StaticClass();
}
void UBaseActorAttributes::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Health(TEXT("Health"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBaseActorAttributes"));
}
UBaseActorAttributes::UBaseActorAttributes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseActorAttributes);
UBaseActorAttributes::~UBaseActorAttributes() {}
// End Class UBaseActorAttributes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_BaseActorAttributes_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseActorAttributes, UBaseActorAttributes::StaticClass, TEXT("UBaseActorAttributes"), &Z_Registration_Info_UClass_UBaseActorAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseActorAttributes), 2144286706U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_BaseActorAttributes_h_3523252629(TEXT("/Script/NS"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_BaseActorAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_2025_cplusplus_Sensei_Sensei_NS_Source_NS_BaseActorAttributes_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
