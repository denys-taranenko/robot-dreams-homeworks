#include <string>
#include "Weapon.h"
#include "PlayerClass.h"
#include "Player.h"

int main()
{
	Player player1("OnePunchMan", new SniperRifle, new DefaultClass);
	Player player2("JohnCena", new Axe, new DefenderClass);
	Player player3("Pacman", new Pistol, new AttackerClass);
	Player player4("Healer", new Pistol, new MedicClass);

	player1.attack(player2, 500);
	player4.heal(player2);
	player1.attack(player2, 2000);
	player1.attack(player1, 300);
	player2.attack(player1, 1);
	player1.attack(player2, 500);
	player3.attack(player2, 100);
	player3.attack(player1, 100);
	player4.heal(player2);

	return 0;
}