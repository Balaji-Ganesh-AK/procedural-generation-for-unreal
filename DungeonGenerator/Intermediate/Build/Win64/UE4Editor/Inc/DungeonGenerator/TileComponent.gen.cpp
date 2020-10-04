// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonGenerator/TileComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileComponent() {}
// Cross Module References
	DUNGEONGENERATOR_API UClass* Z_Construct_UClass_UTileComponent_NoRegister();
	DUNGEONGENERATOR_API UClass* Z_Construct_UClass_UTileComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DungeonGenerator();
	DUNGEONGENERATOR_API UClass* Z_Construct_UClass_URoomComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UTileComponent::StaticRegisterNativesUTileComponent()
	{
	}
	UClass* Z_Construct_UClass_UTileComponent_NoRegister()
	{
		return UTileComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTileComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoomPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TileType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TileComponent.h" },
		{ "ModuleRelativePath", "TileComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileComponent_Statics::NewProp_RoomComponent_MetaData[] = {
		{ "Category", "TileComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TileComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileComponent_Statics::NewProp_RoomComponent = { "RoomComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileComponent, RoomComponent), Z_Construct_UClass_URoomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileComponent_Statics::NewProp_RoomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileComponent_Statics::NewProp_RoomComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileComponent_Statics::NewProp_RoomPosition_MetaData[] = {
		{ "Category", "TileComponent" },
		{ "ModuleRelativePath", "TileComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTileComponent_Statics::NewProp_RoomPosition = { "RoomPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileComponent, RoomPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UTileComponent_Statics::NewProp_RoomPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileComponent_Statics::NewProp_RoomPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileComponent_Statics::NewProp_TileType_MetaData[] = {
		{ "Category", "TileComponent" },
		{ "ModuleRelativePath", "TileComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTileComponent_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileComponent, TileType), METADATA_PARAMS(Z_Construct_UClass_UTileComponent_Statics::NewProp_TileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileComponent_Statics::NewProp_TileType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileComponent_Statics::NewProp_RoomComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileComponent_Statics::NewProp_RoomPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileComponent_Statics::NewProp_TileType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTileComponent_Statics::ClassParams = {
		&UTileComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTileComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTileComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTileComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTileComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileComponent, 381142086);
	template<> DUNGEONGENERATOR_API UClass* StaticClass<UTileComponent>()
	{
		return UTileComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileComponent(Z_Construct_UClass_UTileComponent, &UTileComponent::StaticClass, TEXT("/Script/DungeonGenerator"), TEXT("UTileComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
