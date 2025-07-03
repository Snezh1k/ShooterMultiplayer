// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShooterMultiplayerGameMode.h"
#include "Character/ShooterMultiplayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShooterMultiplayerGameMode::AShooterMultiplayerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
