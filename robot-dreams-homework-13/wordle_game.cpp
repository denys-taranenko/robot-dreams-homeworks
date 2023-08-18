#define _CRT_SECURE_NO_WARNINGS

#include "wordle_game.h"
#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <cctype>

const int WORD_LENGTH = 5;
const int DATE_BUFFER_SIZE = 11;

const int MAX_GUESSED_WORDS = 100;
char guessedWords[MAX_GUESSED_WORDS][WORD_LENGTH + 1];
int guessedWordCount = 0;

std::string getCurrentDateStr() {

    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);

    char buffer[DATE_BUFFER_SIZE] = {};
    std::strftime(buffer, sizeof(buffer), "%d-%m-%Y", now);
    return buffer;
}

bool isValidWord(const char* word) {

    return std::strlen(word) == WORD_LENGTH;
}

void loadRandomWord(const char* filename, char* word) {
    std::ifstream file(filename);

    int wordCount = 0;
    std::string line;
    while (std::getline(file, line)) {
        wordCount++;
    }

    file.clear();
    file.seekg(0, std::ios::beg);

    int randomIndex = std::rand() % wordCount;

    for (int i = 0; i < randomIndex; i++) {
        std::getline(file, line);
    }
    std::strncpy(word, line.c_str(), WORD_LENGTH);
    file.close();
}

void displayWord(const char* targetWord, const char* guessedWord) {

    for (int i = 0; i < WORD_LENGTH; i++)
    {
        if (targetWord[i] == guessedWord[i])
        {
            std::cout << static_cast<char>(std::toupper(targetWord[i]));
        }
        else if (std::strchr(targetWord, guessedWord[i]) && targetWord[i] != guessedWord[i])
        {
            std::cout << static_cast<char>(std::tolower(guessedWord[i]));
        }
        else
        {
            std::cout << '*';
        }
    }
    std::cout << std::endl;
}

void loadGameState(const char* gameStateFile, std::string& lastGuessedDateStr, bool& isWordOfTheDayGuessedToday) {
    std::ifstream stateInput(gameStateFile);

    if (stateInput) {
        stateInput >> lastGuessedDateStr;

        if (lastGuessedDateStr == getCurrentDateStr()) {
            stateInput >> isWordOfTheDayGuessedToday;
        }
    }
    stateInput.close();
}

void saveGameState(const char* gameStateFile, const std::string& lastGuessedDateStr, const bool isWordOfTheDayGuessedToday) {
    std::ofstream stateOutput(gameStateFile);

    if (stateOutput) {
        stateOutput << lastGuessedDateStr << ' ';
        stateOutput << isWordOfTheDayGuessedToday;
    }
    stateOutput.close();
}

int getMenuChoice() {

    int choice = -1;
    while (choice != 0 && choice != 1 && choice != 2)
    {
        std::cout << "1 - Wordle of the day\n";
        std::cout << "2 - Random Wordle\n";
        std::cout << "0 - Exit\n";
        std::cout << "Enter: ";
        std::cin >> choice;
        if (choice != 0 && choice != 1 && choice != 2)
        {
            std::cout << "Invalid input. Please enter a valid menu choice.\n";
        }
    }
    return choice;
}

void playWordle(const char* database, char* targetWord) {

    loadRandomWord(database, targetWord);

    int attempts = 0;
    char guessedWord[6];

    while (true)
    {
        std::cout << "Enter your guess (" + std::to_string(WORD_LENGTH) + " letters): ";
        std::cin >> guessedWord;

        attempts++;

        if (!isValidWord(guessedWord))
        {
            std::cout << "Invalid input. Please enter a 5-letter word.\n";
            continue;
        }

        if (std::strcmp(targetWord, guessedWord) == 0)
        {
            std::cout << "Congratulations! You guessed the word \"" << targetWord << "\" in " << attempts << " attempts.\n";
            break;
        }
        else
        {
            std::cout << "Incorrect guess. Word so far: ";
            displayWord(targetWord, guessedWord);
        }
    }
}

void handleWordleOfTheDay(const char* wordOfTheDayDatabase, char* targetWord, bool& isWordOfTheDayGuessed, std::string& lastGuessedDate) {
    bool wordAlreadyGuessed = false;

    for (int i = 0; i < guessedWordCount; i++) {
        if (std::strcmp(targetWord, guessedWords[i]) == 0) {
            wordAlreadyGuessed = true;
            break;
        }
    }

    if (!isWordOfTheDayGuessed || lastGuessedDate != getCurrentDateStr()) {
        if (!wordAlreadyGuessed) {
            playWordle(wordOfTheDayDatabase, targetWord);
            isWordOfTheDayGuessed = true;
            lastGuessedDate = getCurrentDateStr();

            std::strcpy(guessedWords[guessedWordCount], targetWord);
            guessedWordCount++;
        }
        else {
            std::cout << "This word has already been guessed. Try again tomorrow!\n";
        }
    }
    else {
        std::cout << "You have already guessed the word of the day. Try again tomorrow!\n";
    }
}

void handleRandomWordle(const char* randomWordDatabase, char* targetWord) {

    playWordle(randomWordDatabase, targetWord);
}