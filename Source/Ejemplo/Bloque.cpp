// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
ABloque::ABloque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Initialize properties
	MallaObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	RootComponent = MallaObstaculo;
	MallaObstaculo->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaObstaculo(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (ObjetoMallaObstaculo.Succeeded())
	{
		MallaObstaculo->SetStaticMesh(ObjetoMallaObstaculo.Object);

		//MallaBloque->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	
		MinX = -300.f;
		MaxX = 300.f;
		MinY = -300.f;
		MaxY = 300.f;
}

// Called when the game starts or when spawned
void ABloque::BeginPlay()
{
    Super::BeginPlay();

    // Posición inicial aleatoria dentro de los límites
    float RandX = FMath::FRandRange(MinX, MaxX);
    float RandY = FMath::FRandRange(MinY, MaxY);

    FVector NuevaPos = FVector(RandX, RandY, GetActorLocation().Z);
    SetActorLocation(NuevaPos);

   for (int32 i = 0; i < 5; i++)
   {
	   ElegirMovimientoAleatorio();
   }
}

// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!Direccion.IsZero())
	{
		FVector NuevaPos = GetActorLocation() + (Direccion * Velocidad * DeltaTime);
		SetActorLocation(NuevaPos);
	}
}

void ABloque::ElegirMovimientoAleatorio()
{
    // 0 = horizontal, 1 = vertical
    int32 RandomChoice = FMath::RandRange(0, 1);

    if (RandomChoice == 0)
    {
        MoverHorizontal();
    }
    else
    {
        MoverVertical();
    }
}

void ABloque::MoverHorizontal()
{
    Direccion = FVector(0.f, 0.f, 1.f); // Eje X
}

void ABloque::MoverVertical()
{
    Direccion = FVector(0.f, 1.f, 0.f); // Eje Y
}
