// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonGenerator/TileBoardGeneratorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileBoardGeneratorComponent() {}
// Cross Module References
	DUNGEONGENERATOR_API UClass* Z_Construct_UClass_UTileBoardGeneratorComponent_NoRegister();
	DUNGEONGENERATOR_API UClass* Z_Construct_UClass_UTileBoardGeneratorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DungeonGenerator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DUNGEONGENERATOR_API UClass* Z_Construct_UClass_UTileBoardComponent_NoRegister();
// End Cross Module References
	void UTileBoardGeneratorComponent::StaticRegisterNativesUTileBoardGeneratorComponent()
	{
	}
	UClass* Z_Construct_UClass_UTileBoardGeneratorComponent_NoRegister()
	{
		return UTileBoardGeneratorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTileBoardGeneratorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileBPs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TileBPs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TileBPs_Key_KeyProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TileBPs_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoardBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BoardBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RoomBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomAssets;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoomAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tileBoard__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tileBoard_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__worldScalar__MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__worldScalar_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxTries__MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__maxTries_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__victoryDepth__MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__victoryDepth_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__seed__MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__seed_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TileBoardGeneratorComponent.h" },
		{ "ModuleRelativePath", "TileBoardGeneratorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_TileBPs_MetaData[] = {
		{ "Category", "TileBoardGeneratorComponent" },
		{ "ModuleRelativePath", "TileBoardGeneratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_TileBPs = { "TileBPs", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileBoardGeneratorComponent, TileBPs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_TileBPs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_TileBPs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_TileBPs_Key_KeyProp = { "TileBPs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_TileBPs_ValueProp = { "TileBPs", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_BoardBP_MetaData[] = {
		{ "Category", "TileBoardGeneratorComponent" },
		{ "ModuleRelativePath", "TileBoardGeneratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_BoardBP = { "BoardBP", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileBoardGeneratorComponent, BoardBP), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_BoardBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_BoardBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_RoomBP_MetaData[] = {
		{ "Category", "TileBoardGeneratorComponent" },
		{ "ModuleRelativePath", "TileBoardGeneratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_RoomBP = { "RoomBP", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileBoardGeneratorComponent, RoomBP), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_RoomBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_RoomBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_RoomAssets_MetaData[] = {
		{ "Category", "TileBoardGeneratorComponent" },
		{ "Comment", "//Text file for storing game data;\n" },
		{ "ModuleRelativePath", "TileBoardGeneratorComponent.h" },
		{ "ToolTip", "Text file for storing game data;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_RoomAssets = { "RoomAssets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileBoardGeneratorComponent, RoomAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_RoomAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_RoomAssets_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_RoomAssets_Inner = { "RoomAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__tileBoard__MetaData[] = {
		{ "Category", "TileBoardGeneratorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TileBoardGeneratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__tileBoard_ = { "_tileBoard_", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileBoardGeneratorComponent, _tileBoard_), Z_Construct_UClass_UTileBoardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__tileBoard__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__tileBoard__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__worldScalar__MetaData[] = {
		{ "Category", "TileBoardGeneratorComponent" },
		{ "ModuleRelativePath", "TileBoardGeneratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__worldScalar_ = { "_worldScalar_", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileBoardGeneratorComponent, _worldScalar_), METADATA_PARAMS(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__worldScalar__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__worldScalar__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__maxTries__MetaData[] = {
		{ "Category", "TileBoardGeneratorComponent" },
		{ "ModuleRelativePath", "TileBoardGeneratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__maxTries_ = { "_maxTries_", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileBoardGeneratorComponent, _maxTries_), METADATA_PARAMS(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__maxTries__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__maxTries__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__victoryDepth__MetaData[] = {
		{ "Category", "TileBoardGeneratorComponent" },
		{ "ModuleRelativePath", "TileBoardGeneratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__victoryDepth_ = { "_victoryDepth_", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileBoardGeneratorComponent, _victoryDepth_), METADATA_PARAMS(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__victoryDepth__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__victoryDepth__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__seed__MetaData[] = {
		{ "Category", "TileBoardGeneratorComponent" },
		{ "ModuleRelativePath", "TileBoardGeneratorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__seed_ = { "_seed_", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileBoardGeneratorComponent, _seed_), METADATA_PARAMS(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__seed__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__seed__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_TileBPs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_TileBPs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_TileBPs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_BoardBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_RoomBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_RoomAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp_RoomAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__tileBoard_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__worldScalar_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__maxTries_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__victoryDepth_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::NewProp__seed_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileBoardGeneratorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::ClassParams = {
		&UTileBoardGeneratorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileBoardGeneratorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTileBoardGeneratorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileBoardGeneratorComponent, 284596050);
	template<> DUNGEONGENERATOR_API UClass* StaticClass<UTileBoardGeneratorComponent>()
	{
		return UTileBoardGeneratorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileBoardGeneratorComponent(Z_Construct_UClass_UTileBoardGeneratorComponent, &UTileBoardGeneratorComponent::StaticClass, TEXT("/Script/DungeonGenerator"), TEXT("UTileBoardGeneratorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileBoardGeneratorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
