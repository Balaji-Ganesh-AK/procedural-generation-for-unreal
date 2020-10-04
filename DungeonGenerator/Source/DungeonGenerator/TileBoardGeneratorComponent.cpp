// Fill out your copyright notice in the Description page of Project Settings.


#include "TileBoardGeneratorComponent.h"

// Sets default values for this component's properties
UTileBoardGeneratorComponent::UTileBoardGeneratorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTileBoardGeneratorComponent::BeginPlay()
{
	Super::BeginPlay();

	_stream_ = FRandomStream(_seed_);
	Generate();
	// ...

	
	
}


// Called every frame
void UTileBoardGeneratorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UTileBoardGeneratorComponent::Generate()
{

	//Create a tile board

	FRotator BoardRotation(0, 0, 0);
	FVector BoardPos = GetOwner()->GetActorLocation();
	AActor* BoardActor = GetWorld()->SpawnActor(BoardBP.Get(), &BoardPos, &BoardRotation);
	_tileBoard_ = BoardActor->FindComponentByClass<UTileBoardComponent>();
	
	//Create a starting room
	FString RoomName = TEXT("Room1");
	FString StrRoomData = LoadRoomString(RoomName);
	
	URoomComponent* StartRoom = CreateRoomFromString(RoomName, StrRoomData, FVector2D(0, 0));
	
	_previous_room_pos_ = StartRoom->RoomPos;
	
	
	for(int i =0;i<_victoryDepth_;i++)
	{
		URoomComponent* NextRoom = CreateRoomFromString(RoomName, StrRoomData, FVector2D(_previous_room_pos_.X, _previous_room_pos_.Y), StartRoom);
		
		_previous_room_pos_ = NextRoom->RoomPos;
		StartRoom = NextRoom;
	}

	
	
	
	//Generate doors;

	

}

URoomComponent* UTileBoardGeneratorComponent::CreateRoomFromString(FString& RoomName, FString& strRoomData,
	FVector2D originBoardPos, URoomComponent* prevRoom)
{
	UE_LOG(LogTemp, Warning, TEXT("asdasd"));
	URoomComponent::DoorValue FreeDoor = URoomComponent::None;
	//Create Room
	if (prevRoom != nullptr)
	{
		
		 FreeDoor = prevRoom->FindARandomFreeDoor(_stream_);

		switch (FreeDoor)
		{
		case URoomComponent::North:originBoardPos.X = URoomComponent::North + originBoardPos.X; prevRoom->SetDoorStatus(URoomComponent::North); UE_LOG(LogTemp, Warning, TEXT("NOrth")); break;
		case URoomComponent::South: originBoardPos.X = URoomComponent::South + originBoardPos.X;  prevRoom->SetDoorStatus(URoomComponent::South); UE_LOG(LogTemp, Warning, TEXT("South")); break;
		case URoomComponent::West: originBoardPos.Y = URoomComponent::West + originBoardPos.Y;  prevRoom->SetDoorStatus(URoomComponent::West); UE_LOG(LogTemp, Warning, TEXT("West")); break;
		case URoomComponent::East: originBoardPos.Y = URoomComponent::East + originBoardPos.Y;   prevRoom->SetDoorStatus(URoomComponent::East); UE_LOG(LogTemp, Warning, TEXT("East")); break;
		case URoomComponent::None: UE_LOG(LogTemp, Warning, TEXT("This cant be happening")); break;
		default:;
		}
	}



	FRotator RoomRotation(0, 0, 0);
	
	FVector RoomPos = FVector(originBoardPos.X, originBoardPos.Y, 0);
	AActor* RoomActor = GetWorld()->SpawnActor(RoomBP.Get(), &RoomPos, &RoomRotation);

	//UE_LOG(LogTemp, Warning, TEXT("X:%d  Y:%d"), originBoardPos.X, originBoardPos.Y);

	RoomActor->AttachToActor(_tileBoard_->GetOwner(), FAttachmentTransformRules::KeepRelativeTransform,TEXT("Room"));
	URoomComponent* Room = RoomActor->FindComponentByClass<URoomComponent>();
	if (prevRoom != nullptr)
	{
		Room->SetDoorStatus(FreeDoor); 

	}
	Room->OriginBoardPosition = originBoardPos;
	Room->RoomName = RoomName;
	Room->RoomPos = RoomPos;
	_tileBoard_->RoomComponents.Add(Room);
	
	//Step through each character of the room string and spawn a tile
	int32 tempX = 0;
	int32 tempY = 0;

	for(int32 i=0; i< strRoomData.Len();i++)
	{
		FString tileType = strRoomData.Mid(i, 1);
		if(tileType == TEXT("\n"))
		{
			tempX = 0;
			tempY++;
			continue;
		}
		SpawnTile(tileType, Room, FVector2D(tempX,tempY));
		tempX++;
		
	}
	

	/*UE_LOG(LogTemp, Warning, TEXT("%d"), test);*/
	return Room;

	
}

UTileComponent* UTileBoardGeneratorComponent::SpawnTile(FString tileType, URoomComponent* room, FVector2D roomPos)
{
	if(!TileBPs.Contains(tileType))
	{
		return nullptr;
	}
	TSubclassOf<class AActor> TileBP = TileBPs[tileType];
	if(TileBP==nullptr)
		return nullptr;

	float rot = 0;
	if (tileType == TEXT("E") || tileType == "W")
		rot = 90;

	FRotator TileRotation(0, rot, 0);
	FVector TilePos = FVector(_worldScalar_ * roomPos.X, _worldScalar_ * roomPos.Y, 0);
	AActor* TileActor = GetWorld()->SpawnActor(TileBP.Get(), &TilePos, &TileRotation);


	TileActor->AttachToActor(room->GetOwner(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("Tile"));
	UTileComponent* Tile = TileActor->FindComponentByClass<UTileComponent>();

	//setup the tile data
	//Tile->TileType = tileType;
	////Tile->RoomComponent = room;
	//room->Tiles.Add(Tile);
	//Tile->RoomPosition = roomPos;
	
	return Tile;

	
}

FString UTileBoardGeneratorComponent::LoadRoomString(const FString& RoomName)
{
	//Get the directory 
	FString dir = FPaths::ProjectConfigDir();
	
	FString file = FString::Printf(TEXT("%s/Rooms/%s.txt") ,*dir, *RoomName);

	IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();

	FString FileContent;
	if(FileManager.FileExists(*file))
	{
		if(FFileHelper::LoadFileToString(FileContent, *file,FFileHelper::EHashOptions::None))
		{
			return FileContent;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("FileManupultion: Did not load text from file"));
		}
		
	}
	return FString();
	
}

