/*
   HackflihtSimCameraHUD.hpp: heads-up display class definition

   Copyright (C) Simon D. Levy 2017

   This file is part of HackflightSim.

   HackflightSim is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   HackflightSim is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with Hackflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "HackflightSimCameraHUD.generated.h"

UCLASS(Config = Game)
class HACKFLIGHTSIM_API AHackflightSimCameraHUD : public AHUD
{
	GENERATED_BODY()

	virtual void DrawHUD() override;

	const float LEFTX = 1600.f;
	const float TOPY = 600.f;
	const float WIDTH = 256.f;
	const float HEIGHT = 128.f;
	
	const FLinearColor BORDER_COLOR = FLinearColor::Yellow;
	const float BORDER_WIDTH = 2.0f;

	void drawBorder(float lx, float uy, float rx, float by);
};
