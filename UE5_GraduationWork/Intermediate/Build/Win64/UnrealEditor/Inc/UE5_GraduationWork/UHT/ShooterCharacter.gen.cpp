// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_GraduationWork/Variant_Shooter/ShooterCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UE5_GRADUATIONWORK_API UClass* Z_Construct_UClass_AShooterCharacter();
UE5_GRADUATIONWORK_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
UE5_GRADUATIONWORK_API UClass* Z_Construct_UClass_AUE5_GraduationWorkCharacter();
UE5_GRADUATIONWORK_API UClass* Z_Construct_UClass_UShooterWeaponHolder_NoRegister();
UE5_GRADUATIONWORK_API UFunction* Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UE5_GraduationWork();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FBulletCountUpdatedDelegate *******************************************
struct Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature_Statics
{
	struct _Script_UE5_GraduationWork_eventBulletCountUpdatedDelegate_Parms
	{
		int32 MagazineSize;
		int32 Bullets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Bullets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature_Statics::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE5_GraduationWork_eventBulletCountUpdatedDelegate_Parms, MagazineSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature_Statics::NewProp_Bullets = { "Bullets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UE5_GraduationWork_eventBulletCountUpdatedDelegate_Parms, Bullets), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature_Statics::NewProp_MagazineSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature_Statics::NewProp_Bullets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UE5_GraduationWork, nullptr, "BulletCountUpdatedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature_Statics::_Script_UE5_GraduationWork_eventBulletCountUpdatedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature_Statics::_Script_UE5_GraduationWork_eventBulletCountUpdatedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UE5_GraduationWork_BulletCountUpdatedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBulletCountUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& BulletCountUpdatedDelegate, int32 MagazineSize, int32 Bullets)
{
	struct _Script_UE5_GraduationWork_eventBulletCountUpdatedDelegate_Parms
	{
		int32 MagazineSize;
		int32 Bullets;
	};
	_Script_UE5_GraduationWork_eventBulletCountUpdatedDelegate_Parms Parms;
	Parms.MagazineSize=MagazineSize;
	Parms.Bullets=Bullets;
	BulletCountUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FBulletCountUpdatedDelegate *********************************************

// ********** Begin Class AShooterCharacter Function DoStartFiring *********************************
struct Z_Construct_UFunction_AShooterCharacter_DoStartFiring_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles start firing input */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles start firing input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_DoStartFiring_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "DoStartFiring", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_DoStartFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_DoStartFiring_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AShooterCharacter_DoStartFiring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_DoStartFiring_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterCharacter::execDoStartFiring)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoStartFiring();
	P_NATIVE_END;
}
// ********** End Class AShooterCharacter Function DoStartFiring ***********************************

// ********** Begin Class AShooterCharacter Function DoStopFiring **********************************
struct Z_Construct_UFunction_AShooterCharacter_DoStopFiring_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles stop firing input */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles stop firing input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_DoStopFiring_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "DoStopFiring", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_DoStopFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_DoStopFiring_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AShooterCharacter_DoStopFiring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_DoStopFiring_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterCharacter::execDoStopFiring)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoStopFiring();
	P_NATIVE_END;
}
// ********** End Class AShooterCharacter Function DoStopFiring ************************************

// ********** Begin Class AShooterCharacter Function DoSwitchWeapon ********************************
struct Z_Construct_UFunction_AShooterCharacter_DoSwitchWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles switch weapon input */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles switch weapon input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_DoSwitchWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "DoSwitchWeapon", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_DoSwitchWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_DoSwitchWeapon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AShooterCharacter_DoSwitchWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_DoSwitchWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShooterCharacter::execDoSwitchWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoSwitchWeapon();
	P_NATIVE_END;
}
// ********** End Class AShooterCharacter Function DoSwitchWeapon **********************************

// ********** Begin Class AShooterCharacter ********************************************************
void AShooterCharacter::StaticRegisterNativesAShooterCharacter()
{
	UClass* Class = AShooterCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoStartFiring", &AShooterCharacter::execDoStartFiring },
		{ "DoStopFiring", &AShooterCharacter::execDoStopFiring },
		{ "DoSwitchWeapon", &AShooterCharacter::execDoSwitchWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AShooterCharacter;
UClass* AShooterCharacter::GetPrivateStaticClass()
{
	using TClass = AShooterCharacter;
	if (!Z_Registration_Info_UClass_AShooterCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShooterCharacter"),
			Z_Registration_Info_UClass_AShooterCharacter.InnerSingleton,
			StaticRegisterNativesAShooterCharacter,
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
	return Z_Registration_Info_UClass_AShooterCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AShooterCharacter_NoRegister()
{
	return AShooterCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShooterCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A player controllable first person shooter character\n *  Manages a weapon inventory through the IShooterWeaponHolder interface\n *  Manages health and death\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Variant_Shooter/ShooterCharacter.h" },
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A player controllable first person shooter character\nManages a weapon inventory through the IShooterWeaponHolder interface\nManages health and death" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnNoiseEmitter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AI Noise emitter component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI Noise emitter component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fire weapon input action */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire weapon input action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchWeaponAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Switch weapon input action */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch weapon input action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonWeaponSocket_MetaData[] = {
		{ "Category", "Weapons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the first person mesh weapon socket */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the first person mesh weapon socket" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonWeaponSocket_MetaData[] = {
		{ "Category", "Weapons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the third person mesh weapon socket */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the third person mesh weapon socket" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAimDistance_MetaData[] = {
		{ "Category", "Aim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max distance to use for aim traces */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max distance to use for aim traces" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current HP remaining to this character */" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current HP remaining to this character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamByte_MetaData[] = {
		{ "Category", "Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Team ID for this character*/" },
#endif
		{ "ModuleRelativePath", "Variant_Shooter/ShooterCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Team ID for this character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnNoiseEmitter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchWeaponAction;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FirstPersonWeaponSocket;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ThirdPersonWeaponSocket;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAimDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeamByte;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterCharacter_DoStartFiring, "DoStartFiring" }, // 3772532036
		{ &Z_Construct_UFunction_AShooterCharacter_DoStopFiring, "DoStopFiring" }, // 1034790919
		{ &Z_Construct_UFunction_AShooterCharacter_DoSwitchWeapon, "DoSwitchWeapon" }, // 2695605878
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PawnNoiseEmitter = { "PawnNoiseEmitter", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, PawnNoiseEmitter), Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnNoiseEmitter_MetaData), NewProp_PawnNoiseEmitter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAction_MetaData), NewProp_FireAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SwitchWeaponAction = { "SwitchWeaponAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, SwitchWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchWeaponAction_MetaData), NewProp_SwitchWeaponAction_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FirstPersonWeaponSocket = { "FirstPersonWeaponSocket", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, FirstPersonWeaponSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonWeaponSocket_MetaData), NewProp_FirstPersonWeaponSocket_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ThirdPersonWeaponSocket = { "ThirdPersonWeaponSocket", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, ThirdPersonWeaponSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonWeaponSocket_MetaData), NewProp_ThirdPersonWeaponSocket_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxAimDistance = { "MaxAimDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, MaxAimDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAimDistance_MetaData), NewProp_MaxAimDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, CurrentHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHP_MetaData), NewProp_CurrentHP_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TeamByte = { "TeamByte", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, TeamByte), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamByte_MetaData), NewProp_TeamByte_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_PawnNoiseEmitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FireAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SwitchWeaponAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FirstPersonWeaponSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ThirdPersonWeaponSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MaxAimDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CurrentHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_TeamByte,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AUE5_GraduationWorkCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_GraduationWork,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AShooterCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UShooterWeaponHolder_NoRegister, (int32)VTABLE_OFFSET(AShooterCharacter, IShooterWeaponHolder), false },  // 3660609323
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterCharacter_Statics::ClassParams = {
	&AShooterCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AShooterCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterCharacter()
{
	if (!Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton, Z_Construct_UClass_AShooterCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterCharacter);
AShooterCharacter::~AShooterCharacter() {}
// ********** End Class AShooterCharacter **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_UE5_GraduationWork_UE5_GraduationWork_Source_UE5_GraduationWork_Variant_Shooter_ShooterCharacter_h__Script_UE5_GraduationWork_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterCharacter, AShooterCharacter::StaticClass, TEXT("AShooterCharacter"), &Z_Registration_Info_UClass_AShooterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterCharacter), 1269090729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UE5_GraduationWork_UE5_GraduationWork_Source_UE5_GraduationWork_Variant_Shooter_ShooterCharacter_h__Script_UE5_GraduationWork_997672117(TEXT("/Script/UE5_GraduationWork"),
	Z_CompiledInDeferFile_FID_GitHub_UE5_GraduationWork_UE5_GraduationWork_Source_UE5_GraduationWork_Variant_Shooter_ShooterCharacter_h__Script_UE5_GraduationWork_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UE5_GraduationWork_UE5_GraduationWork_Source_UE5_GraduationWork_Variant_Shooter_ShooterCharacter_h__Script_UE5_GraduationWork_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
