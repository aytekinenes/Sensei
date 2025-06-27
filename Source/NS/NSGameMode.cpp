// Copyright Epic Games, Inc. All Rights Reserved.

#include "NSGameMode.h"
#include "NSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANSGameMode::ANSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
