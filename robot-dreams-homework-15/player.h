#include "weapon.h"
#include <string>

enum class PlayerClass {

    Assault,
    Support,
    Sniper,
    Medic
};

class Player {

private:

    static const int MAX_WEAPONS = 5;
    std::string name;
    int health = 0;
    PlayerClass player_class;
    Weapon weapons[MAX_WEAPONS];
    const std::string TEAM_NAME;

private:

    std::string getClassAsString(PlayerClass player_class) const;

public:

    Player();
    Player(const std::string& name, int health, PlayerClass player_class, const std::string& team_name);

public:

    void addWeapon(const Weapon& weapon);
    void showWeapons() const;
    void printPlayerInfo() const;
};