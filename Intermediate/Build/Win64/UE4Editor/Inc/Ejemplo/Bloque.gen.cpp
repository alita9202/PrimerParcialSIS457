// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ejemplo/Bloque.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque() {}
// Cross Module References
	EJEMPLO_API UClass* Z_Construct_UClass_ABloque_NoRegister();
	EJEMPLO_API UClass* Z_Construct_UClass_ABloque();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Ejemplo();
// End Cross Module References
	void ABloque::StaticRegisterNativesABloque()
	{
	}
	UClass* Z_Construct_UClass_ABloque_NoRegister()
	{
		return ABloque::StaticClass();
	}
	struct Z_Construct_UClass_ABloque_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloque_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Ejemplo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bloque.h" },
		{ "ModuleRelativePath", "Bloque.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloque_Statics::NewProp_MinX_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "Bloque.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloque_Statics::NewProp_MinX = { "MinX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloque, MinX), METADATA_PARAMS(Z_Construct_UClass_ABloque_Statics::NewProp_MinX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::NewProp_MinX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloque_Statics::NewProp_MaxX_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "Bloque.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloque_Statics::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloque, MaxX), METADATA_PARAMS(Z_Construct_UClass_ABloque_Statics::NewProp_MaxX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::NewProp_MaxX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloque_Statics::NewProp_MinY_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "Bloque.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloque_Statics::NewProp_MinY = { "MinY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloque, MinY), METADATA_PARAMS(Z_Construct_UClass_ABloque_Statics::NewProp_MinY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::NewProp_MinY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloque_Statics::NewProp_MaxY_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "Bloque.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloque_Statics::NewProp_MaxY = { "MaxY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloque, MaxY), METADATA_PARAMS(Z_Construct_UClass_ABloque_Statics::NewProp_MaxY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::NewProp_MaxY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloque_Statics::NewProp_Velocidad_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "Comment", "// Velocidad del movimiento\n" },
		{ "ModuleRelativePath", "Bloque.h" },
		{ "ToolTip", "Velocidad del movimiento" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloque_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloque, Velocidad), METADATA_PARAMS(Z_Construct_UClass_ABloque_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::NewProp_Velocidad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloque_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Statics::NewProp_MinX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Statics::NewProp_MaxX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Statics::NewProp_MinY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Statics::NewProp_MaxY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Statics::NewProp_Velocidad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloque_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Statics::ClassParams = {
		&ABloque::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABloque_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloque()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloque_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloque, 2368873150);
	template<> EJEMPLO_API UClass* StaticClass<ABloque>()
	{
		return ABloque::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloque(Z_Construct_UClass_ABloque, &ABloque::StaticClass, TEXT("/Script/Ejemplo"), TEXT("ABloque"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
