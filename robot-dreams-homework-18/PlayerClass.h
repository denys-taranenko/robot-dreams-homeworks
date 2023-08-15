#pragma once
#include <string>

class PlayerClass 
{
public:
    virtual ~PlayerClass() = default;
    virtual float getDamageMultiplier() const = 0;
    virtual float getDefenseMultiplier() const = 0;
    virtual float getHealingMultiplier() const { return 1.0f; }
};

class DefaultClass : public PlayerClass 
{
public:
    float getDamageMultiplier() const override { return 1.0f; }
    float getDefenseMultiplier() const override { return 1.0f; }
};

class DefenderClass : public PlayerClass 
{
public:
    float getDamageMultiplier() const override { return 0.9f; }
    float getDefenseMultiplier() const override { return 1.2f; }
};

class AttackerClass : public PlayerClass 
{
public:
    float getDamageMultiplier() const override { return 1.1f; }
    float getDefenseMultiplier() const override { return 1.0f; }
};

class MedicClass : public PlayerClass 
{
public:
    float getDamageMultiplier() const override { return 0.8f; }
    float getDefenseMultiplier() const override { return 1.0f; }
    float getHealingMultiplier() const override { return 1.5f; }
};