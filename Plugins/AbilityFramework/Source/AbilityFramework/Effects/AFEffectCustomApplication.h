// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "../GAGlobalTypes.h"
#include "GAGameEffect.h"
#include "AFEffectCustomApplication.generated.h"

/**
 * Default application used for instant effects.
 */
UCLASS(meta = (DisplayName = "Default Application"))
class ABILITYFRAMEWORK_API UAFEffectCustomApplication : public UObject
{
	GENERATED_BODY()
public:
	virtual bool ApplyEffect(const FGAEffectHandle& InHandle, struct FGAEffect* EffectIn,
		FGAEffectProperty& InProperty, struct FGAEffectContainer* InContainer,
		const FGAEffectContext& InContext, const FAFFunctionModifier& Modifier = FAFFunctionModifier());
	
	virtual void ExecuteEffect(const FGAEffectHandle& InHandle,
		FGAEffectProperty& InProperty, 
		const FGAEffectContext& InContext,
		const FAFFunctionModifier& Modifier = FAFFunctionModifier());

	virtual bool ShowPeriod()
	{
		return false;
	}
	virtual bool ShowDuration()
	{
		return false;
	}
};
