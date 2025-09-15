// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef EJEMPLO_Puerta_generated_h
#error "Puerta.generated.h already included, missing '#pragma once' in Puerta.h"
#endif
#define EJEMPLO_Puerta_generated_h

#define Ejemplo_Source_Ejemplo_Puerta_h_16_SPARSE_DATA
#define Ejemplo_Source_Ejemplo_Puerta_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMeshEndOverlap); \
	DECLARE_FUNCTION(execOnMeshBeginOverlap);


#define Ejemplo_Source_Ejemplo_Puerta_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMeshEndOverlap); \
	DECLARE_FUNCTION(execOnMeshBeginOverlap);


#define Ejemplo_Source_Ejemplo_Puerta_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPuerta(); \
	friend struct Z_Construct_UClass_APuerta_Statics; \
public: \
	DECLARE_CLASS(APuerta, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ejemplo"), NO_API) \
	DECLARE_SERIALIZER(APuerta)


#define Ejemplo_Source_Ejemplo_Puerta_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPuerta(); \
	friend struct Z_Construct_UClass_APuerta_Statics; \
public: \
	DECLARE_CLASS(APuerta, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ejemplo"), NO_API) \
	DECLARE_SERIALIZER(APuerta)


#define Ejemplo_Source_Ejemplo_Puerta_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APuerta(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuerta) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuerta); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuerta); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuerta(APuerta&&); \
	NO_API APuerta(const APuerta&); \
public:


#define Ejemplo_Source_Ejemplo_Puerta_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuerta(APuerta&&); \
	NO_API APuerta(const APuerta&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuerta); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuerta); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APuerta)


#define Ejemplo_Source_Ejemplo_Puerta_h_16_PRIVATE_PROPERTY_OFFSET
#define Ejemplo_Source_Ejemplo_Puerta_h_13_PROLOG
#define Ejemplo_Source_Ejemplo_Puerta_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ejemplo_Source_Ejemplo_Puerta_h_16_PRIVATE_PROPERTY_OFFSET \
	Ejemplo_Source_Ejemplo_Puerta_h_16_SPARSE_DATA \
	Ejemplo_Source_Ejemplo_Puerta_h_16_RPC_WRAPPERS \
	Ejemplo_Source_Ejemplo_Puerta_h_16_INCLASS \
	Ejemplo_Source_Ejemplo_Puerta_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Ejemplo_Source_Ejemplo_Puerta_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ejemplo_Source_Ejemplo_Puerta_h_16_PRIVATE_PROPERTY_OFFSET \
	Ejemplo_Source_Ejemplo_Puerta_h_16_SPARSE_DATA \
	Ejemplo_Source_Ejemplo_Puerta_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Ejemplo_Source_Ejemplo_Puerta_h_16_INCLASS_NO_PURE_DECLS \
	Ejemplo_Source_Ejemplo_Puerta_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EJEMPLO_API UClass* StaticClass<class APuerta>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Ejemplo_Source_Ejemplo_Puerta_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
