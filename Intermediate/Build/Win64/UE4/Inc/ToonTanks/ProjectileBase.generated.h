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
struct FVector;
struct FHitResult;
#ifdef TOONTANKS_ProjectileBase_generated_h
#error "ProjectileBase.generated.h already included, missing '#pragma once' in ProjectileBase.h"
#endif
#define TOONTANKS_ProjectileBase_generated_h

#define UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_SPARSE_DATA
#define UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileBase(); \
	friend struct Z_Construct_UClass_AProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBase)


#define UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileBase(); \
	friend struct Z_Construct_UClass_AProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBase)


#define UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBase(AProjectileBase&&); \
	NO_API AProjectileBase(const AProjectileBase&); \
public:


#define UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBase(AProjectileBase&&); \
	NO_API AProjectileBase(const AProjectileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileBase)


#define UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AProjectileBase, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AProjectileBase, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(AProjectileBase, DamageType); } \
	FORCEINLINE static uint32 __PPO__HitParticle() { return STRUCT_OFFSET(AProjectileBase, HitParticle); } \
	FORCEINLINE static uint32 __PPO__ParticleTrail() { return STRUCT_OFFSET(AProjectileBase, ParticleTrail); } \
	FORCEINLINE static uint32 __PPO__HitSound() { return STRUCT_OFFSET(AProjectileBase, HitSound); } \
	FORCEINLINE static uint32 __PPO__LaunchSound() { return STRUCT_OFFSET(AProjectileBase, LaunchSound); } \
	FORCEINLINE static uint32 __PPO__HitShake() { return STRUCT_OFFSET(AProjectileBase, HitShake); } \
	FORCEINLINE static uint32 __PPO__MovementSpeed() { return STRUCT_OFFSET(AProjectileBase, MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AProjectileBase, Damage); }


#define UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_10_PROLOG
#define UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_SPARSE_DATA \
	UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_RPC_WRAPPERS \
	UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_INCLASS \
	UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_PRIVATE_PROPERTY_OFFSET \
	UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_SPARSE_DATA \
	UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_INCLASS_NO_PURE_DECLS \
	UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class AProjectileBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_ToonTanks_Source_ToonTanks_Actors_ProjectileBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
