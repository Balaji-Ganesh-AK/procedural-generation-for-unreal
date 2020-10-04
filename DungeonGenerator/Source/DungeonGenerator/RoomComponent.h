// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TileComponent.h"
#include "DoorComponent.h"
#include "unordered_map"

#include "RoomComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DUNGEONGENERATOR_API URoomComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	URoomComponent();

	enum DoorValue
	{
		North = 1800,
		South = -1800,
		West = -1700,
		East = 1700,
		None
	};

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:




	std::unordered_map<DoorValue, bool> DoorData = {
		{North, false},
		{South, false},
		{West, false},
		 {East, false}
	};

	int FindRandomAvailableDoors(FRandomStream& _stream);
	
	
public:

#pragma region Methods
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;



#pragma endregion 

	UPROPERTY(EditAnywhere)
		FString RoomName;

	UPROPERTY(EditAnywhere)
		FVector2D OriginBoardPosition;

	UPROPERTY(EditAnywhere)
		FVector RoomPos;

	UPROPERTY(EditAnywhere)
		TArray<UTileComponent*> Tiles;

	UPROPERTY(EditAnywhere)
		TArray<UDoorComponent*> DoorComponents;

	
	DoorValue FindARandomFreeDoor(FRandomStream& _stream);
	void SetDoorStatus(DoorValue door);
	
	


};







