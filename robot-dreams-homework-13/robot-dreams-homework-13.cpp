#include <ctime>
#include <fstream>
#include "wordle_game.h"

int main() {

    const char* randomWordDatabase = "random_wordle_database.txt";
    const char* wordOfTheDayDatabase = "wordle_of_the_day_database.txt";
    const char* stateFile = "wordle_state.txt";

    const int WORD_LENGTH = 5;
    char randomWord[WORD_LENGTH + 1] = {};
    char wordOfTheDay[WORD_LENGTH + 1] = {};

    const int MAX_GUESSED_WORDS = 100;
    char guessedWords[MAX_GUESSED_WORDS][WORD_LENGTH + 1];
    int guessedWordCount = 0;

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    char targetWord[6] = {};
    bool isWordOfTheDayGuessed = false;

    std::string lastGuessedDate;

    loadGameState(stateFile, lastGuessedDate, isWordOfTheDayGuessed);

    int menuChoice = -1;
    while (menuChoice != 0)
    {
        menuChoice = getMenuChoice();

        switch (menuChoice)
        {
        case 1:
            handleWordleOfTheDay(wordOfTheDayDatabase, wordOfTheDay, isWordOfTheDayGuessed, lastGuessedDate);
            break;
        case 2:
            handleRandomWordle(randomWordDatabase, randomWord);
            break;
        case 0:
            break;
        }
    }

    std::ofstream guessedWordsOutput("wordle_state.txt");
    for (int i = 0; i < guessedWordCount; i++) {
        guessedWordsOutput << guessedWords[i] << '\n';
    }
    guessedWordsOutput.close();

    saveGameState(stateFile, lastGuessedDate, isWordOfTheDayGuessed);

    return 0;
}