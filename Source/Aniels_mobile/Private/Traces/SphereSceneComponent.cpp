// Fill out your copyright notice in the Description page of Project Settings.


#include "Traces/SphereSceneComponent.h"

#include "Kismet/KismetSystemLibrary.h"

// Sets default values for this component's properties
USphereSceneComponent::USphereSceneComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USphereSceneComponent::BeginPlay()
{
	Super::BeginPlay();

	FVector Start = GetOwner()->GetActorLocation();
	FVector End = GetOwner()->GetActorLocation();
	TArray<AActor*> ActorIgnore;
	ActorIgnore.Add(GetOwner());
	TArray<FHitResult> OutHits;
	const bool Hits = UKismetSystemLibrary::SphereTraceMulti(GetWorld(),
		Start,
		End,
		Radius,
		UEngineTypes::ConvertToTraceType(ECC_Camera),
		false,
		ActorIgnore,
		EDrawDebugTrace::ForDuration,
		OutHits,
		true
		);

	if (Hits)
	{

		for (const FHitResult Hit : OutHits)
		{
			GEngine->AddOnScreenDebugMessage(-1,
				2.0f,
				FColor::Green,
				FString::Printf(TEXT("Hit damage %s"),*Hit.GetActor()->GetName()));
		}
		
	}

	
}


// Called every frame
void USphereSceneComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
}

