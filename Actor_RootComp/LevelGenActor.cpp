// Fill out your copyright notice in the Description page of Project Settings.

#include "LevelGenActor.h"
#include "Components/SphereComponent.h"

// Sets default values
ALevelGenActor::ALevelGenActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	SphereComponent->InitSphereRadius(30.0f);
	SphereComponent->SetCollisionProfileName(TEXT("BlockAllDynamic"));

	RootComponent = SphereComponent;
}

// Called when the game starts or when spawned
void ALevelGenActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALevelGenActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

