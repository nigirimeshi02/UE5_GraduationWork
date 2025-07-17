// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_GraduationWork/UE5_GraduationWorkCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUE5_GraduationWorkCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
UE5_GRADUATIONWORK_API UClass* Z_Construct_UClass_AUE5_GraduationWorkCameraManager();
UE5_GRADUATIONWORK_API UClass* Z_Construct_UClass_AUE5_GraduationWorkCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_GraduationWork();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUE5_GraduationWorkCameraManager *****************************************
void AUE5_GraduationWorkCameraManager::StaticRegisterNativesAUE5_GraduationWorkCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUE5_GraduationWorkCameraManager;
UClass* AUE5_GraduationWorkCameraManager::GetPrivateStaticClass()
{
	using TClass = AUE5_GraduationWorkCameraManager;
	if (!Z_Registration_Info_UClass_AUE5_GraduationWorkCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UE5_GraduationWorkCameraManager"),
			Z_Registration_Info_UClass_AUE5_GraduationWorkCameraManager.InnerSingleton,
			StaticRegisterNativesAUE5_GraduationWorkCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AUE5_GraduationWorkCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AUE5_GraduationWorkCameraManager_NoRegister()
{
	return AUE5_GraduationWorkCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUE5_GraduationWorkCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "UE5_GraduationWorkCameraManager.h" },
		{ "ModuleRelativePath", "UE5_GraduationWorkCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_GraduationWorkCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUE5_GraduationWorkCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_GraduationWork,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_GraduationWorkCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_GraduationWorkCameraManager_Statics::ClassParams = {
	&AUE5_GraduationWorkCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_GraduationWorkCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE5_GraduationWorkCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUE5_GraduationWorkCameraManager()
{
	if (!Z_Registration_Info_UClass_AUE5_GraduationWorkCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_GraduationWorkCameraManager.OuterSingleton, Z_Construct_UClass_AUE5_GraduationWorkCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUE5_GraduationWorkCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_GraduationWorkCameraManager);
AUE5_GraduationWorkCameraManager::~AUE5_GraduationWorkCameraManager() {}
// ********** End Class AUE5_GraduationWorkCameraManager *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UE5_GraduationWork_UE5_GraduationWork_Source_UE5_GraduationWork_UE5_GraduationWorkCameraManager_h__Script_UE5_GraduationWork_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_GraduationWorkCameraManager, AUE5_GraduationWorkCameraManager::StaticClass, TEXT("AUE5_GraduationWorkCameraManager"), &Z_Registration_Info_UClass_AUE5_GraduationWorkCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_GraduationWorkCameraManager), 1485965873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UE5_GraduationWork_UE5_GraduationWork_Source_UE5_GraduationWork_UE5_GraduationWorkCameraManager_h__Script_UE5_GraduationWork_3898955060(TEXT("/Script/UE5_GraduationWork"),
	Z_CompiledInDeferFile_FID_GitHub_UE5_GraduationWork_UE5_GraduationWork_Source_UE5_GraduationWork_UE5_GraduationWorkCameraManager_h__Script_UE5_GraduationWork_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UE5_GraduationWork_UE5_GraduationWork_Source_UE5_GraduationWork_UE5_GraduationWorkCameraManager_h__Script_UE5_GraduationWork_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
