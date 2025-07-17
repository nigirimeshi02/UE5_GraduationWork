// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_GraduationWork/UE5_GraduationWorkGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUE5_GraduationWorkGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UE5_GRADUATIONWORK_API UClass* Z_Construct_UClass_AUE5_GraduationWorkGameMode();
UE5_GRADUATIONWORK_API UClass* Z_Construct_UClass_AUE5_GraduationWorkGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_GraduationWork();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUE5_GraduationWorkGameMode **********************************************
void AUE5_GraduationWorkGameMode::StaticRegisterNativesAUE5_GraduationWorkGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUE5_GraduationWorkGameMode;
UClass* AUE5_GraduationWorkGameMode::GetPrivateStaticClass()
{
	using TClass = AUE5_GraduationWorkGameMode;
	if (!Z_Registration_Info_UClass_AUE5_GraduationWorkGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UE5_GraduationWorkGameMode"),
			Z_Registration_Info_UClass_AUE5_GraduationWorkGameMode.InnerSingleton,
			StaticRegisterNativesAUE5_GraduationWorkGameMode,
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
	return Z_Registration_Info_UClass_AUE5_GraduationWorkGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AUE5_GraduationWorkGameMode_NoRegister()
{
	return AUE5_GraduationWorkGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUE5_GraduationWorkGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5_GraduationWorkGameMode.h" },
		{ "ModuleRelativePath", "UE5_GraduationWorkGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_GraduationWorkGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUE5_GraduationWorkGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_GraduationWork,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_GraduationWorkGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_GraduationWorkGameMode_Statics::ClassParams = {
	&AUE5_GraduationWorkGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_GraduationWorkGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE5_GraduationWorkGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUE5_GraduationWorkGameMode()
{
	if (!Z_Registration_Info_UClass_AUE5_GraduationWorkGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_GraduationWorkGameMode.OuterSingleton, Z_Construct_UClass_AUE5_GraduationWorkGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUE5_GraduationWorkGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_GraduationWorkGameMode);
AUE5_GraduationWorkGameMode::~AUE5_GraduationWorkGameMode() {}
// ********** End Class AUE5_GraduationWorkGameMode ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UE5_GraduationWork_UE5_GraduationWork_Source_UE5_GraduationWork_UE5_GraduationWorkGameMode_h__Script_UE5_GraduationWork_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_GraduationWorkGameMode, AUE5_GraduationWorkGameMode::StaticClass, TEXT("AUE5_GraduationWorkGameMode"), &Z_Registration_Info_UClass_AUE5_GraduationWorkGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_GraduationWorkGameMode), 2429072502U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UE5_GraduationWork_UE5_GraduationWork_Source_UE5_GraduationWork_UE5_GraduationWorkGameMode_h__Script_UE5_GraduationWork_2899524280(TEXT("/Script/UE5_GraduationWork"),
	Z_CompiledInDeferFile_FID_GitHub_UE5_GraduationWork_UE5_GraduationWork_Source_UE5_GraduationWork_UE5_GraduationWorkGameMode_h__Script_UE5_GraduationWork_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UE5_GraduationWork_UE5_GraduationWork_Source_UE5_GraduationWork_UE5_GraduationWorkGameMode_h__Script_UE5_GraduationWork_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
