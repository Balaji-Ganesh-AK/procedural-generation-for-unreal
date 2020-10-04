// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonGenerator/RoomBP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomBP() {}
// Cross Module References
	DUNGEONGENERATOR_API UClass* Z_Construct_UClass_ARoomBP_NoRegister();
	DUNGEONGENERATOR_API UClass* Z_Construct_UClass_ARoomBP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DungeonGenerator();
// End Cross Module References
	void ARoomBP::StaticRegisterNativesARoomBP()
	{
	}
	UClass* Z_Construct_UClass_ARoomBP_NoRegister()
	{
		return ARoomBP::StaticClass();
	}
	struct Z_Construct_UClass_ARoomBP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoomBP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoomBP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RoomBP.h" },
		{ "ModuleRelativePath", "RoomBP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoomBP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoomBP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARoomBP_Statics::ClassParams = {
		&ARoomBP::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoomBP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoomBP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoomBP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARoomBP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoomBP, 3187215406);
	template<> DUNGEONGENERATOR_API UClass* StaticClass<ARoomBP>()
	{
		return ARoomBP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoomBP(Z_Construct_UClass_ARoomBP, &ARoomBP::StaticClass, TEXT("/Script/DungeonGenerator"), TEXT("ARoomBP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoomBP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
