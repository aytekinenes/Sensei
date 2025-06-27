// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNS_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NS()
	{
		if (!Z_Registration_Info_UPackage__Script_NS.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NS",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE857B09D,
				0x2B277AA0,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NS(Z_Construct_UPackage__Script_NS, TEXT("/Script/NS"), Z_Registration_Info_UPackage__Script_NS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE857B09D, 0x2B277AA0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
