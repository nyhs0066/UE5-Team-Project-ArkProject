// Fill out your copyright notice in the Description page of Project Settings.


#include "THActor.h"

// Sets default values
ATHActor::ATHActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATHActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATHActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

