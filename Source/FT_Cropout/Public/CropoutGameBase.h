// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CropoutGameBase.generated.h"

/**
 * 
 */
UCLASS()
class FT_CROPOUT_API ACropoutGameBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	int _villagerCount = 0;
};
