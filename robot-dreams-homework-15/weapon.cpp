#include "weapon.h"

Weapon::Weapon()
    : damage(0), range(0) {}

Weapon::Weapon(const std::string& name, int damage, int range)
    : name(name), damage(damage), range(range) {}

std::string Weapon::getName() const {
    return name;
}

int Weapon::getDamage() const {
    return damage;
}

int Weapon::getRange() const {
    return range;
}