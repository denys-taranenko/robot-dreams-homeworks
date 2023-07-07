#pragma once

void displayMainMenu();
void displayHelp();
void displayStatistics(int best_record, int last_record);
void handleInvalidInput();
int getDifficultyLevel();
int generateRandomNumber(int difficulty_level);
int getUserNumber();
bool askToPlayAgain();
void startNewGame(int difficulty_level, int& best_record, int& last_record);
void playGame();