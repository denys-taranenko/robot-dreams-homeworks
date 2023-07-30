#include <iostream>
#include "wordle_game.h"


int main() {

    const char* randomWordDatabase = "random_wordle_database.txt";
    const char* wordOfTheDayDatabase = "wordle_of_the_day_database.txt";
    const char* stateFile = "wordle_state.txt";

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    char targetWord[6] = {};
    bool isWordOfTheDayGuessed = false;

    std::string lastGuessedDate;

    loadGameState(stateFile, lastGuessedDate, targetWord, isWordOfTheDayGuessed);

    int menuChoice = -1;
    while (menuChoice != 0)
    {
        menuChoice = getMenuChoice();

        switch (menuChoice)
        {
        case 1:
            handleWordleOfTheDay(wordOfTheDayDatabase, targetWord, isWordOfTheDayGuessed, lastGuessedDate);
            break;
        case 2:
            handleRandomWordle(randomWordDatabase, targetWord);
            break;
        case 0:
            break;
        }
    }

    saveGameState(stateFile, lastGuessedDate, targetWord, isWordOfTheDayGuessed);

    return 0;
}