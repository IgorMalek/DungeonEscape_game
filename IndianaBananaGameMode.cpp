// Copyright Epic Games, Inc. All Rights Reserved.

#include "IndianaBananaGameMode.h"
#include "IndianaBananaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIndianaBananaGameMode::AIndianaBananaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
