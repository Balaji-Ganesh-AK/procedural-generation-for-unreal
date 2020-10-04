// Fill out your copyright notice in the Description page of Project Settings.


#include "RoomComponent.h"

// Sets default values for this component's properties
URoomComponent::URoomComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URoomComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	
	
}


int URoomComponent::FindRandomAvailableDoors(FRandomStream& _stream)
{
	int count = 0;
	for (auto& x : DoorData)
	{
		if (!x.second)
		{
			count++;
		}
	}
	
	/*int output = 1 + (rand() % static_cast<int>(count - 1 + 1));*/
	int out = _stream.RandRange(1, count);
	UE_LOG(LogTemp, Warning, TEXT("Random numbeR?:%d "), out);
	UE_LOG(LogTemp, Warning, TEXT("Count!:%d "), count);
	return out;
}

// Called every frame
void URoomComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

URoomComponent::DoorValue URoomComponent::FindARandomFreeDoor(FRandomStream& _stream)
{

	int count = 1;
	
	DoorValue returnDoor =None;
	const int RandomDoor = FindRandomAvailableDoors (_stream);
	
		
		for (auto& x : DoorData)
		{
			
			if(count== RandomDoor)
			{
				returnDoor = x.first;
				return  returnDoor;
			}
			else
			{
				if (!x.second)
				{
					count++;
				}
			
			}
		}

		
		
		
		return  returnDoor;
}

void URoomComponent::SetDoorStatus(DoorValue door)
{
	UE_LOG(LogTemp, Warning, TEXT("Door:%d"), door);
	DoorData[door] = true;
}





