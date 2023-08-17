#include "player.h"
#include <string>

class Team {

private:

    static const int MAX_PLAYERS = 10;
    std::string team_name;
    int num_players = 0;
    Player* players[MAX_PLAYERS];

public:

    Team(const std::string& team_name);

public:

    void addPlayer(Player* player);
    void removePlayer(Player* player);
    void showTeamInfo() const;
};