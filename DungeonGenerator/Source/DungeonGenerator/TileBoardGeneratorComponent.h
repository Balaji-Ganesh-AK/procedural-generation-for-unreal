// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TileBoardComponent.h"
#include "Components/ActorComponent.h"
#include "TileBoardGeneratorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUNGEONGENERATOR_API UTileBoardGeneratorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTileBoardGeneratorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


#pragma region Functions
	void Generate();

	URoomComponent* CreateRoomFromString(FString& RoomName, FString& strRoomData, FVector2D originBoardPos, URoomComponent* prevRoom =nullptr);
	
	UTileComponent* SpawnTile(FString tileType, URoomComponent* room, FVector2D roomPos);
	
	FString LoadRoomString(const FString& RoomName);
#pragma endregion 


	

	UPROPERTY(EditAnywhere)
		int32 _seed_;

	

	UPROPERTY(EditAnywhere)
		int32 _victoryDepth_;

	FRandomStream _stream_;

	UPROPERTY(EditAnywhere)
		int32 _maxTries_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float _worldScalar_;

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTileBoardComponent* _tileBoard_;

	//Text file for storing game data;
	UPROPERTY(EditAnywhere)
		TArray < FString > RoomAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<class AActor> RoomBP;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<class AActor> BoardBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TMap<FString, TSubclassOf<class AActor>> TileBPs;



private:
	FVector _previous_room_pos_;
};
