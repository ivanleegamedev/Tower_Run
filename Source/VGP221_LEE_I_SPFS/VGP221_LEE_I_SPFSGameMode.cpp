// Copyright Epic Games, Inc. All Rights Reserved.

#include "VGP221_LEE_I_SPFSGameMode.h"
#include "VGP221_LEE_I_SPFSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVGP221_LEE_I_SPFSGameMode::AVGP221_LEE_I_SPFSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
