#pragma once

UENUM(BlueprintType, Category="ES|Types", meta=(Bitflags, DisplayName="Resource Type"))
enum class EResourceType : uint8
{
	Food,
	Tech,
	MaxTech
};
