#pragma once

UENUM(BlueprintType, Category="ES|Types", meta=(Bitflags, DisplayName="Card Type"))
enum class ECardType : uint8
{
	Ground,
	Blueprint,
	Policy
};