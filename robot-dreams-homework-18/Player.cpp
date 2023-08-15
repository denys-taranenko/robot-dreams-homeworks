#include "Player.h"

void Player::setWeapon(Weapon* weapon)
{
	delete m_weapon;
	m_weapon = weapon;
}

void Player::setPlayerClass(PlayerClass* playerClass)
{
	delete m_class;
	m_class = playerClass;
}

void Player::attack(const Player& other, int distance) 
{
    if (&other == this) 
    {
        std::cout << "\n-------FRIENDLY FIRE!-------\n";
    }

    if (other.isEliminated()) 
    {
        std::cout << "Player " << other.getName() << " has been already eliminated!\n";
        return;
    }

    int baseDamage = m_weapon->getDamageRate(distance);
    float damageMultiplier = m_class->getDamageMultiplier() / other.m_class->getDefenseMultiplier();
    int damage = static_cast<int>(baseDamage * damageMultiplier);

    std::cout << "Player " << getName() << " attacked Player " << other.getName() <<
        " with weapon " << m_weapon->getName() << " with damage " << damage << std::endl;

    int newHealth = other.m_health - damage;
    if (newHealth <= 0) 
    {
        newHealth = 0;
        std::cout << "Player " << other.getName() << " was eliminated!\n";
    }

    std::cout << "Health left for " << other.getName() << ": " << newHealth << std::endl;

    const_cast<Player&>(other).setHealth(newHealth);
}

void Player::heal(Player& other) 
{
    if (&other == this) 
    {
        std::cout << "Can't heal yourself!\n";
        return;
    }

    if (other.isEliminated()) 
    {
        std::cout << "Player " << other.getName() << " is already eliminated. Can't heal.\n";
        return;
    }

    int healedAmount = static_cast<int>(10 * m_class->getHealingMultiplier());
    int newHealth = other.m_health + healedAmount;
    if (newHealth > 100) 
    {
        newHealth = 100;
    }

    std::cout << "Player " << getName() << " healed Player " << other.getName() <<
        " for " << healedAmount << " health. New health: " << newHealth << "\n";

    other.setHealth(newHealth);
}