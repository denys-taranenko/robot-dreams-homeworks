#include "Victory.h"

#include "Monster.h"

int VictoryAdditionalCards::apply(Monster* monster)
{
    const unsigned monsterLvl = monster->getLevel();

    if (monsterLvl > 15)
        return 3;
    if (monsterLvl > 10)
        return 2;
    if (monsterLvl > 8)
        return 1;

}