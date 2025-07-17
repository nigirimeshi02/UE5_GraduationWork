// Copyright Epic Games, Inc. All Rights Reserved.


#include "UE5_GraduationWorkPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "UE5_GraduationWorkCameraManager.h"

AUE5_GraduationWorkPlayerController::AUE5_GraduationWorkPlayerController()
{
	// set the player camera manager class
	PlayerCameraManagerClass = AUE5_GraduationWorkCameraManager::StaticClass();
}

void AUE5_GraduationWorkPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
		{
			Subsystem->AddMappingContext(CurrentContext, 0);
		}
	}
}
