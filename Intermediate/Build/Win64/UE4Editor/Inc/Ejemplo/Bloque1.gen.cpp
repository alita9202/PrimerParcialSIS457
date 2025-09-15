// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ejemplo/Bloque1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque1() {}
// Cross Module References
	EJEMPLO_API UClass* Z_Construct_UClass_ABloque1_NoRegister();
	EJEMPLO_API UClass* Z_Construct_UClass_ABloque1();
	EJEMPLO_API UClass* Z_Construct_UClass_ABloque();
	UPackage* Z_Construct_UPackage__Script_Ejemplo();
// End Cross Module References
	void ABloque1::StaticRegisterNativesABloque1()
	{
	}
	UClass* Z_Construct_UClass_ABloque1_NoRegister()
	{
		return ABloque1::StaticClass();
	}
	struct Z_Construct_UClass_ABloque1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloque1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloque,
		(UObject* (*)())Z_Construct_UPackage__Script_Ejemplo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloque1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Bloque1.h" },
		{ "ModuleRelativePath", "Bloque1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloque1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloque1_Statics::ClassParams = {
		&ABloque1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloque1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloque1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloque1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloque1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloque1, 3154439711);
	template<> EJEMPLO_API UClass* StaticClass<ABloque1>()
	{
		return ABloque1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloque1(Z_Construct_UClass_ABloque1, &ABloque1::StaticClass, TEXT("/Script/Ejemplo"), TEXT("ABloque1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
