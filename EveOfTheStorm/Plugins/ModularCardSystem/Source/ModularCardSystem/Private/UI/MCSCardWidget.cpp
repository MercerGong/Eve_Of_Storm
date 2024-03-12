// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/MCSCardWidget.h"

void UMCSCardWidget::Init(const FCardData& InCardData)
{
	CardData = InCardData;

	K2_Init(CardData);
}
