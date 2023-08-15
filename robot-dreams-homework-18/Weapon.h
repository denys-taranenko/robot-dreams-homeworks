#pragma once
#include <string>
#include <cmath>

class Weapon
{
public:
	Weapon(std::string name, int damageLevel, float accuracy, float effectiveAccuracy, float weight)
		: name(name), damageLevel(damageLevel), accuracy(accuracy), effectiveAccuracy(effectiveAccuracy), weight(weight) {}

	virtual int getDamageRate(int distance) const = 0;

	std::string getName() const { return name; }
protected:
	std::string name = nullptr;
	int damageLevel = 0;
	float accuracy = 0.0f;
	float effectiveAccuracy = 0.0f;
	float weight = 0.0f;
};


class MeleeWeapon : public Weapon
{
public:
	MeleeWeapon(std::string name, int damageLevel, float accuracy, float effectiveAccuracy, float weight)
		: Weapon(name, damageLevel, accuracy, effectiveAccuracy, weight) {}

	virtual int getDamageRate(int distance) const override
	{
		if (distance <= 10) 
		{
			float adjustedAccuracy = accuracy * (10.0f / distance);
			float damageMultiplier = std::min(1.0f, adjustedAccuracy / effectiveAccuracy);
			return damageLevel * damageMultiplier;
		}
		return 0;
	}
};


class Axe : public MeleeWeapon
{
public:
	Axe() : MeleeWeapon("Axe", 30, 0.7, 0.9, 10) {}
};


class Knife : public MeleeWeapon
{
public:
	Knife() : MeleeWeapon("Knife", 15, 0.8, 1.0, 5) {}
};


class BareHand : public MeleeWeapon
{
public:
	BareHand() : MeleeWeapon("Bare Hand", 5, 0.9, 1.2, 1) {}
};


class RangedWeapon : public Weapon
{
public:
	RangedWeapon(std::string name, int damageLevel, float accuracy, float effectiveAccuracy, float weight)
		: Weapon(name, damageLevel, accuracy, effectiveAccuracy, weight) {}

	virtual int getDamageRate(int distance) const override 
	{
		float precision = getPrecision(distance);
		float adjustedAccuracy = accuracy * precision;
		float damageMultiplier = std::min(1.0f, adjustedAccuracy / effectiveAccuracy);
		return static_cast<int>(damageLevel * damageMultiplier);
	}

protected:
	virtual float getPrecision(int distance) const { return 1.0f; }
};


class Shotgun : public RangedWeapon
{
public:
	Shotgun() : RangedWeapon("Shotgun", 50, 0.6, 0.8, 15) {}
};


class Pistol : public RangedWeapon
{
public:
	Pistol() : RangedWeapon("Pistol", 25, 0.8, 1.0, 5) {}
};


class AssaultRifle : public RangedWeapon
{
public:
	AssaultRifle() : RangedWeapon("Assault Rifle", 40, 0.7, 0.9, 10) {}
};


class SniperRifle : public RangedWeapon
{
public:
	SniperRifle() : RangedWeapon("Sniper Rifle", 80, 0.5, 0.7, 20) {}
protected:
	virtual float getPrecision(int distance) const override;
};