#include "player.h"
#include <iostream>

Player::Player()
    : health(0), player_class(PlayerClass::Assault) {}

Player::Player(const std::string& name, int health, PlayerClass player_class, const std::string& team_name)
    : name(name), health(health), player_class(player_class), TEAM_NAME(team_name) {}

void Player::addWeapon(const Weapon& weapon) {

    for (int i = 0; i < MAX_WEAPONS; i++)
    {
        if (weapons[i].getName().empty())
        {
            weapons[i] = weapon;
            return;
        }
    }
    std::cout << "Player's weapon inventory is full. Cannot add more weapons." << std::endl;
}

std::string Player::getClassAsString(PlayerClass player_class) const {

    switch (player_class)
    {
    case PlayerClass::Assault:
        return "Assault";
        break;
    case PlayerClass::Support:
        return "Support";
        break;
    case PlayerClass::Sniper:
        return "Sniper";
        break;
    case PlayerClass::Medic:
        return "Medic";
        break;
    default:
        return "Unknown";
        break;
    }
}

void Player::showWeapons() const {

    std::cout << "Weapons for " << name << " (" << getClassAsString(player_class) << "):" << std::endl;

    for (int i = 0; i < MAX_WEAPONS; i++)
    {
        if (!weapons[i].getName().empty())
        {
            std::cout << "- " << weapons[i].getName() << " (Damage: " << weapons[i].getDamage() << ", Range: " << weapons[i].getRange() << ")" << std::endl;
        }
    }
}

void Player::printPlayerInfo() const {

    std::cout << "Player Info:" << std::endl;
    std::cout << "- Name: " << name << std::endl;
    std::cout << "- Health: " << health << std::endl;
    std::cout << "- Class: " << getClassAsString(player_class) << std::endl;
    std::cout << "- Team: " << TEAM_NAME << std::endl;
    std::cout << "- Weapons:" << std::endl;

    for (int i = 0; i < MAX_WEAPONS; i++)
    {
        const Weapon& weapon = weapons[i];
        if (!weapon.getName().empty())
        {
            std::cout << "  - " << weapon.getName() << " (Damage: " << weapon.getDamage() << ", Range: " << weapon.getRange() << ")" << std::endl;
        }
    }
}