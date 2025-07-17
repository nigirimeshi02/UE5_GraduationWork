// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_GraduationWork_init() {}
	UE5_GRADUATIONWORK_API UFunction* Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature();
	UE5_GRADUATIONWORK_API UFunction* Z_Construct_UDelegateFunction_UE5_GraduationWork_PawnDeathDelegate__DelegateSignature();
	UE5_GRADUATIONWORK_API UFunction* Z_Construct_UDelegateFunction_UE5_GraduationWork_SprintStateChangedDelegate__DelegateSignature();
	UE5_GRADUATIONWORK_API UFunction* Z_Construct_UDelegateFunction_UE5_GraduationWork_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UE5_GraduationWork;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UE5_GraduationWork()
	{
		if (!Z_Registration_Info_UPackage__Script_UE5_GraduationWork.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UE5_GraduationWork_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UE5_GraduationWork_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UE5_GraduationWork_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UE5_GraduationWork",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8672569A,
				0xE2AF374B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UE5_GraduationWork.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UE5_GraduationWork.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UE5_GraduationWork(Z_Construct_UPackage__Script_UE5_GraduationWork, TEXT("/Script/UE5_GraduationWork"), Z_Registration_Info_UPackage__Script_UE5_GraduationWork, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8672569A, 0xE2AF374B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
