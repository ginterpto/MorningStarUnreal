// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BaseCharacterAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class MORNINGSTART_API UBaseCharacterAnimInstance : public UAnimInstance {
	GENERATED_BODY()

public:
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IK", meta = (AllowPrivateAccess = "true"))
	bool DisableFootIK;
};
