#include "Weapon.h"

float SniperRifle::getPrecision(int distance) const
{
	if (distance > 2000)
	{
		return 0.2f;
	}
	if (distance > 1000)
	{
		return 1.5f;
	}
	if (distance > 300)
	{
		return 5.0f;
	}
	return 1.0f;
}

int MeleeWeapon::getDamageRate(int distance) const
{
	if (distance <= 10)
	{
		float adjustedAccuracy = accuracy * (10.0f / distance);
		float damageMultiplier = std::min(1.0f, adjustedAccuracy / effectiveAccuracy);
		return damageLevel * damageMultiplier;
	}
	return 0;
}

int RangedWeapon::getDamageRate(int distance) const
{
	float precision = getPrecision(distance);
	float adjustedAccuracy = accuracy * precision;
	float damageMultiplier = std::min(1.0f, adjustedAccuracy / effectiveAccuracy);
	return static_cast<int>(damageLevel * damageMultiplier);
}