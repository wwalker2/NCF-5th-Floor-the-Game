// Fill out your copyright notice in the Description page of Project Settings.

#include "NCF5thFloorGame.h"
#include "LevelTransitor.h"


// Sets default values
ALevelTransitor::ALevelTransitor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	UBoxComponent* BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("RootComponent"));
	RootComponent = BoxComponent;
	BoxComponent->InitBoxExtent(FVector(30.0f, 40.0f, 100.0f));
}

// Called when the game starts or when spawned
void ALevelTransitor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALevelTransitor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void ALevelTransitor::ChangeLevel(FName name)
{
	UWorld* MainWorld = GetWorld();
	
	UGameplayStatics::OpenLevel(GetWorld(), name);
}

