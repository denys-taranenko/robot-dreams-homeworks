#include <string>

void displayWord(const char* targetWord, const char* guessedWord);
void loadRandomWord(const char* filename, char* word);
void loadGameState(const char* gameStateFile, std::string& lastGuessedDateStr, char* targetWordToGuess, bool& isWordOfTheDayGuessedToday);
void playWordle(const char* database, char* targetWord);
void saveGameState(const char* gameStateFile, const std::string& lastGuessedDateStr, const char* targetWordToGuess, const bool isWordOfTheDayGuessedToday);
int getMenuChoice();
std::string getCurrentDateStr();
bool isValidWord(const char* word);
void handleWordleOfTheDay(const char* wordOfTheDayDatabase, char* targetWord, bool& isWordOfTheDayGuessed, std::string& lastGuessedDate);
void handleRandomWordle(const char* randomWordDatabase, char* targetWord);