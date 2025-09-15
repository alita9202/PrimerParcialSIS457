// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Puerta.generated.h"



class UBoxComponent;

UCLASS()
class EJEMPLO_API APuerta : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APuerta();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleAnywhere, Category = "Puerta")
    UStaticMeshComponent* PuertaMesh;

	// Lista global de todas las puertas
	static TArray<APuerta*> AllDoors;

	// Funciones de overlap
	UFUNCTION()
	void OnMeshBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnMeshEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
