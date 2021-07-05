// Copyright Epic Games, Inc. All Rights Reserved.

#include "FishPersonSimulatorGameMode.h"
#include "FishPersonSimulatorHUD.h"
#include "FishPersonSimulatorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFishPersonSimulatorGameMode::AFishPersonSimulatorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFishPersonSimulatorHUD::StaticClass();
}
