// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicUI/Public/SettingsSaveGame.h"
#include "GameFramework/PlayerInput.h"

TArray<FInputActionKeyMapping> USettingsSaveGame::GetModifiedActionKeys()
{
	return ModifiedActionKeys;
}

TArray<FInputAxisKeyMapping> USettingsSaveGame::GetModifiedAxisKeys()
{
	return ModifiedAxisKeys;
}