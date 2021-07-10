// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FishPersonSimulatorHUD.generated.h"

UCLASS()
class AFishPersonSimulatorHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFishPersonSimulatorHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

