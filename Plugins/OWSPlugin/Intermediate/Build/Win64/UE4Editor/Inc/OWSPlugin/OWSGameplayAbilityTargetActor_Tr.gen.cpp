// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameplayAbilityTargetActor_Tr.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameplayAbilityTargetActor_Tr() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
// End Cross Module References
	void AOWSGameplayAbilityTargetActor_Tr::StaticRegisterNativesAOWSGameplayAbilityTargetActor_Tr()
	{
	}
	UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_NoRegister()
	{
		return AOWSGameplayAbilityTargetActor_Tr::StaticClass();
	}
	struct Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTraceAffectsAimPitch_MetaData[];
#endif
		static void NewProp_bTraceAffectsAimPitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceAffectsAimPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOWSGameplayAbilityTargetActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OWSGameplayAbilityTargetActor_Tr.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_Tr.h" },
		{ "ToolTip", "Intermediate base class for all line-trace type targeting actors." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_bTraceAffectsAimPitch_MetaData[] = {
		{ "Category", "Trace" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_Tr.h" },
		{ "ToolTip", "Does the trace affect the aiming pitch" },
	};
#endif
	void Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_bTraceAffectsAimPitch_SetBit(void* Obj)
	{
		((AOWSGameplayAbilityTargetActor_Tr*)Obj)->bTraceAffectsAimPitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_bTraceAffectsAimPitch = { "bTraceAffectsAimPitch", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWSGameplayAbilityTargetActor_Tr), &Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_bTraceAffectsAimPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_bTraceAffectsAimPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_bTraceAffectsAimPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_TraceProfile_MetaData[] = {
		{ "Category", "Trace" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_Tr.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_TraceProfile = { "TraceProfile", nullptr, (EPropertyFlags)0x0011000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetActor_Tr, TraceProfile), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_TraceProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_TraceProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Trace" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_Tr.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetActor_Tr, MaxRange), METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_MaxRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_MaxRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_bTraceAffectsAimPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_TraceProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_MaxRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSGameplayAbilityTargetActor_Tr>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::ClassParams = {
		&AOWSGameplayAbilityTargetActor_Tr::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSGameplayAbilityTargetActor_Tr, 844835133);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSGameplayAbilityTargetActor_Tr>()
	{
		return AOWSGameplayAbilityTargetActor_Tr::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSGameplayAbilityTargetActor_Tr(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr, &AOWSGameplayAbilityTargetActor_Tr::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSGameplayAbilityTargetActor_Tr"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSGameplayAbilityTargetActor_Tr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
