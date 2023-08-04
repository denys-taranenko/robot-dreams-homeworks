#include <iostream>
#include "rectangle.h"
#include "team.h"

int main() {

    Rectangle rectangle_1;
    Rectangle rectangle_2(5.0f, 3.0f);
    Rectangle rectangle_3(8.3f, 4.3f);

    std::cout << rectangle_1 << std::endl;
    std::cout << rectangle_2 << std::endl;
    std::cout << rectangle_3 << std::endl;

    std::cout << std::endl;

    Team team_1("ALFA TEAM");
    Team team_2("CHARLI TEAM");

    Player player_1("John", 100, PlayerClass::Assault, "ALFA TEAM");
    Player player_2("Sarah", 120, PlayerClass::Support, "ALFA TEAM");
    Player player_3("Mike", 80, PlayerClass::Sniper, "CHARLI TEAM");

    Weapon weapon_1("AK-47", 30, 300);
    Weapon weapon_2("Snipex Alligator", 100, 1000);
    Weapon weapon_3("Medkit", 0, 0);

    player_1.addWeapon(weapon_1);
    player_1.addWeapon(weapon_3);
    player_2.addWeapon(weapon_2);
    player_2.addWeapon(weapon_3);
    player_3.addWeapon(weapon_2);

    team_1.addPlayer(&player_1);
    team_1.addPlayer(&player_2);
    team_2.addPlayer(&player_3);

    team_1.showTeamInfo();
    team_2.showTeamInfo();

    return 0;
}