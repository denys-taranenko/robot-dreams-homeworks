#include "team.h"
#include <iostream>

Team::Team(const std::string& team_name)
    : team_name(team_name), num_players(0)
{
    for (int i = 0; i < MAX_PLAYERS; i++)
    {
        players[i] = nullptr;
    }
}

void Team::addPlayer(Player* player) {

    if (num_players < MAX_PLAYERS)
    {
        players[num_players] = player;
        num_players++;
    }
    else
    {
        std::cout << "Team's roster is full. Cannot add more players." << std::endl;
    }
}

void Team::removePlayer(Player* player) {

    for (int i = 0; i < num_players; i++)
    {
        if (players[i] == player)
        {
            players[i] = players[num_players - 1];
            players[num_players - 1] = nullptr;
            num_players--;
            break;
        }
    }
}

void Team::showTeamInfo() const {

    std::cout << "Team: " << team_name << std::endl;
    std::cout << "Number of players: " << num_players << std::endl << std::endl;

    for (int i = 0; i < num_players; i++)
    {
        if (players[i] != nullptr)
        {
            players[i]->printPlayerInfo();
            std::cout << std::endl;
        }
    }

    std::cout << std::endl;
}