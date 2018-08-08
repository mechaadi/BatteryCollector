// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/BatteryPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryPickup() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryPickup_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryPickup();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
// End Cross Module References
	void ABatteryPickup::StaticRegisterNativesABatteryPickup()
	{
	}
	UClass* Z_Construct_UClass_ABatteryPickup_NoRegister()
	{
		return ABatteryPickup::StaticClass();
	}
	struct Z_Construct_UClass_ABatteryPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatteryPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BatteryPickup.h" },
		{ "ModuleRelativePath", "BatteryPickup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatteryPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABatteryPickup_Statics::ClassParams = {
		&ABatteryPickup::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABatteryPickup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABatteryPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABatteryPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABatteryPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatteryPickup, 3750960074);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryPickup(Z_Construct_UClass_ABatteryPickup, &ABatteryPickup::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("ABatteryPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
