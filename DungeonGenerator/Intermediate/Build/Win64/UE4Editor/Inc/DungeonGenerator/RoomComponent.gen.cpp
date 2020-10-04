// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonGenerator/RoomComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomComponent() {}
// Cross Module References
	DUNGEONGENERATOR_API UClass* Z_Construct_UClass_URoomComponent_NoRegister();
	DUNGEONGENERATOR_API UClass* Z_Construct_UClass_URoomComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DungeonGenerator();
	DUNGEONGENERATOR_API UClass* Z_Construct_UClass_UDoorComponent_NoRegister();
	DUNGEONGENERATOR_API UClass* Z_Construct_UClass_UTileComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void URoomComponent::StaticRegisterNativesURoomComponent()
	{
	}
	UClass* Z_Construct_UClass_URoomComponent_NoRegister()
	{
		return URoomComponent::StaticClass();
	}
	struct Z_Construct_UClass_URoomComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DoorComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tiles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoomPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginBoardPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginBoardPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoomName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoomComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RoomComponent.h" },
		{ "ModuleRelativePath", "RoomComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomComponent_Statics::NewProp_DoorComponents_MetaData[] = {
		{ "Category", "RoomComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RoomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoomComponent_Statics::NewProp_DoorComponents = { "DoorComponents", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoomComponent, DoorComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URoomComponent_Statics::NewProp_DoorComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoomComponent_Statics::NewProp_DoorComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoomComponent_Statics::NewProp_DoorComponents_Inner = { "DoorComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDoorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomComponent_Statics::NewProp_Tiles_MetaData[] = {
		{ "Category", "RoomComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RoomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoomComponent_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoomComponent, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URoomComponent_Statics::NewProp_Tiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoomComponent_Statics::NewProp_Tiles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoomComponent_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTileComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomComponent_Statics::NewProp_RoomPos_MetaData[] = {
		{ "Category", "RoomComponent" },
		{ "ModuleRelativePath", "RoomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoomComponent_Statics::NewProp_RoomPos = { "RoomPos", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoomComponent, RoomPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URoomComponent_Statics::NewProp_RoomPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoomComponent_Statics::NewProp_RoomPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomComponent_Statics::NewProp_OriginBoardPosition_MetaData[] = {
		{ "Category", "RoomComponent" },
		{ "ModuleRelativePath", "RoomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoomComponent_Statics::NewProp_OriginBoardPosition = { "OriginBoardPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoomComponent, OriginBoardPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_URoomComponent_Statics::NewProp_OriginBoardPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoomComponent_Statics::NewProp_OriginBoardPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomComponent_Statics::NewProp_RoomName_MetaData[] = {
		{ "Category", "RoomComponent" },
		{ "ModuleRelativePath", "RoomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URoomComponent_Statics::NewProp_RoomName = { "RoomName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoomComponent, RoomName), METADATA_PARAMS(Z_Construct_UClass_URoomComponent_Statics::NewProp_RoomName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoomComponent_Statics::NewProp_RoomName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoomComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomComponent_Statics::NewProp_DoorComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomComponent_Statics::NewProp_DoorComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomComponent_Statics::NewProp_Tiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomComponent_Statics::NewProp_Tiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomComponent_Statics::NewProp_RoomPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomComponent_Statics::NewProp_OriginBoardPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomComponent_Statics::NewProp_RoomName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoomComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URoomComponent_Statics::ClassParams = {
		&URoomComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URoomComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URoomComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URoomComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URoomComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URoomComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URoomComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URoomComponent, 1102581324);
	template<> DUNGEONGENERATOR_API UClass* StaticClass<URoomComponent>()
	{
		return URoomComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URoomComponent(Z_Construct_UClass_URoomComponent, &URoomComponent::StaticClass, TEXT("/Script/DungeonGenerator"), TEXT("URoomComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoomComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
