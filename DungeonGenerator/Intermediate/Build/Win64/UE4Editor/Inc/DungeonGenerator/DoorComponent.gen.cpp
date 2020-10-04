// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonGenerator/DoorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorComponent() {}
// Cross Module References
	DUNGEONGENERATOR_API UClass* Z_Construct_UClass_UDoorComponent_NoRegister();
	DUNGEONGENERATOR_API UClass* Z_Construct_UClass_UDoorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DungeonGenerator();
	DUNGEONGENERATOR_API UClass* Z_Construct_UClass_UTileComponent_NoRegister();
// End Cross Module References
	void UDoorComponent::StaticRegisterNativesUDoorComponent()
	{
	}
	UClass* Z_Construct_UClass_UDoorComponent_NoRegister()
	{
		return UDoorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDoorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectedDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorComponent.h" },
		{ "ModuleRelativePath", "DoorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorComponent_Statics::NewProp_ConnectedDoor_MetaData[] = {
		{ "Category", "DoorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorComponent_Statics::NewProp_ConnectedDoor = { "ConnectedDoor", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorComponent, ConnectedDoor), Z_Construct_UClass_UDoorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorComponent_Statics::NewProp_ConnectedDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::NewProp_ConnectedDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorComponent_Statics::NewProp_Tile_MetaData[] = {
		{ "Category", "DoorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorComponent_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorComponent, Tile), Z_Construct_UClass_UTileComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorComponent_Statics::NewProp_Tile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::NewProp_Tile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorComponent_Statics::NewProp_ConnectedDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorComponent_Statics::NewProp_Tile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoorComponent_Statics::ClassParams = {
		&UDoorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDoorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoorComponent, 3281668288);
	template<> DUNGEONGENERATOR_API UClass* StaticClass<UDoorComponent>()
	{
		return UDoorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorComponent(Z_Construct_UClass_UDoorComponent, &UDoorComponent::StaticClass, TEXT("/Script/DungeonGenerator"), TEXT("UDoorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
