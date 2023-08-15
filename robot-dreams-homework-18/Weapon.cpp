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