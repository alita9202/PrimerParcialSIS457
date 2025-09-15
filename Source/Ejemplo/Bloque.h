// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.generated.h"

UCLASS()
class EJEMPLO_API ABloque : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloque();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UStaticMeshComponent* MallaObstaculo;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float MinX;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float MaxX;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float MinY;

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float MaxY;

	// Velocidad del movimiento
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	float Velocidad = 200.f;

	// Dirección actual
	FVector Direccion;

	// Decide si el bloque se mueve horizontal o vertical
	void ElegirMovimientoAleatorio();

	void MoverHorizontal();
	void MoverVertical();
};
