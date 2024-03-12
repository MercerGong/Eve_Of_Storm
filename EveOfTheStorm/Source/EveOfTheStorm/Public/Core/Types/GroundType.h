#pragma once

UENUM(BlueprintType, Category="ES|Types", meta=(Bitflags, DisplayName="Ground Type"))
enum class EGroundType : uint8
{
	None,
	Stone,
	Sand,
	Grass,
	Water,
	Mountain
};
