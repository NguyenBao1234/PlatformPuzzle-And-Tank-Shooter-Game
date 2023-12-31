// Copyright Epic Games, Inc. All Rights Reserved.

#include "PGameCPPGameMode.h"
#include "PGameCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

APGameCPPGameMode::APGameCPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
