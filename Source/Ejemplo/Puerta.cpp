// Fill out your copyright notice in the Description page of Project Settings.


#include "Puerta.h"
#include "GameFramework/Character.h"
#include "Ejemplo.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

TArray<APuerta*> APuerta::AllDoors;
// Sets default values
APuerta::APuerta()
{
	PrimaryActorTick.bCanEverTick = false;

	PuertaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PuertaMesh"));
	RootComponent = PuertaMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PuertaAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (PuertaAsset.Succeeded())
	{
		PuertaMesh->SetStaticMesh(PuertaAsset.Object);
		PuertaMesh->SetRelativeScale3D(FVector(0.2f, 1.0f, 2.0f));
	}
	PuertaMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	PuertaMesh->SetCollisionObjectType(ECC_WorldDynamic);
	PuertaMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	PuertaMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	PuertaMesh->SetGenerateOverlapEvents(true);


	PuertaMesh->OnComponentBeginOverlap.AddDynamic(this, &APuerta::OnMeshBeginOverlap);
	PuertaMesh->OnComponentEndOverlap.AddDynamic(this, &APuerta::OnMeshEndOverlap);

}

// Called when the game starts or when spawned
void APuerta::BeginPlay()
{
	Super::BeginPlay();
	AllDoors.Add(this);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Puerta registrada en AllDoors"));
}

// Called every frame
void APuerta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}

void APuerta::OnMeshBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Entraste a la puerta!"));
	
	ACharacter* Character = Cast<ACharacter>(OtherActor);
	if (Character && AllDoors.Num() > 1)
	{
		// Buscar otra puerta aleatoria diferente a esta
		APuerta* TargetDoor = nullptr;
		do
		{
			int32 RandomIndex = FMath::RandRange(0, AllDoors.Num() - 1);
			TargetDoor = AllDoors[RandomIndex];
		} while (TargetDoor == this);

		// Teletransportar al Character
		if (TargetDoor)
		{
			FVector ForwardOffset = TargetDoor->GetActorForwardVector() * 200.f;
			FVector TeleportLocation = TargetDoor->GetActorLocation() + ForwardOffset + FVector(0, 0, 120.f);
			Character->SetActorLocation(TeleportLocation, false, nullptr, ETeleportType::TeleportPhysics);
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Yellow, TEXT("Teletransportado!"));
		}
	}
}

void APuerta::OnMeshEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// Aquí no necesitamos nada, salvo debug si quieres
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Saliste de la puerta"));
}
