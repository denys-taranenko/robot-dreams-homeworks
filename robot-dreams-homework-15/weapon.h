#include <string>

class Weapon {

private:

    std::string name;
    int damage = 0;
    int range = 0;

public:

    Weapon();
    Weapon(const std::string& name, int damage, int range);

public:

    std::string getName() const;
    int getDamage() const;
    int getRange() const;
};