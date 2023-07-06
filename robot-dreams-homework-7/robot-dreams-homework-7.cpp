#include <iostream>
#include <ctime>
#include <random>
#include <limits>
#include <climits>

int main() {
	std::mt19937 rng(time(0));

	int best_record = 0;
	int last_record = 0;

	std::cout << "HELLO! AND WELCOME TO THE GAME \"GUESS THE NUMBER\"!\n";
	std::cout << "Try to defeat the ARTIFICIAL INTELLIGENCE!" << std::endl << std::endl;

	while (true) {
		std::cout << "-----MAIN MENU-----" << std::endl << std::endl;
		std::cout << "1 - New Game\n";
		std::cout << "2 - Help\n";
		std::cout << "3 - Statistics\n";
		std::cout << "4 - Quit\n";
		std::cout << "Choose one of the options (1 - 4): ";

		int choice_menu = 0;
		std::cin >> choice_menu;

		if (!std::cin) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Wrong value! Try again!\n";
			continue;
		}

		switch (choice_menu) {
		case 1:
			while (true) {
				std::cout << "-----DIFFICULTY LEVEL-----" << std::endl << std::endl;
				std::cout << "1 - Weakly (from 0 to 50)\n";
				std::cout << "2 - Medium (-50 to 50)\n";
				std::cout << "3 - Unreal (-50 to 50, 7 attempts in total)\n";
				std::cout << "Make your choice (1 - 3): ";

				int difficulty_level = 0;
				std::cin >> difficulty_level;

				if (!std::cin) {
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Wrong difficulty level! Try again!\n";
					continue;
				}

				int attempts = 0;
				int number_to_guess = 0;
				int max_attempts = 0;

				switch (difficulty_level) {
				case 1:
					max_attempts = INT_MAX;
					number_to_guess = rng() % 51;
					break;
				case 2:
					max_attempts = INT_MAX;
					number_to_guess = rng() % 101 - 50;
					break;
				case 3:
					max_attempts = 7;
					number_to_guess = rng() % 101 - 50;
					break;
				default:
					std::cout << "Wrong difficulty level! Try again!\n";
					continue;
				}

				std::cout << "WELL! I MADE A NUMBER!\n";

				while (true) {
					
					std::cout << "Try to guess: ";
					
					int user_number = 0;
					std::cin >> user_number;

					attempts++;

					if (!std::cin) {
						std::cin.clear();
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						std::cout << "Wrong value! Try again!\n";
						continue;
					}

					if (user_number > 50 || user_number < -50) {
						std::cout << "YOU DID NOT READ ABOUT RANGES!\n";
						continue;
					}

					if (user_number == number_to_guess) {
						if (attempts == 1) {
							std::cout << "THIS IS IMPOSSIBLE! HOW DID YOU DO THIS!? Cheater!" << std::endl << std::endl;
						}
						else {
							std::cout << "CONGRATULATIONS! You guessed the number by " << attempts << " attempts!" << std::endl << std::endl;
						}
						if (attempts < best_record || best_record == 0) {
							best_record = attempts;
							std::cout << "NEW RECORD!!! " << best_record << " ATTEMPTS!" << std::endl << std::endl;
						}

						last_record = attempts;

						break;
					}
					else if (attempts >= max_attempts) {
						std::cout << "Expected! YOU LOST AND I WON! I came up with a number: " << number_to_guess << std::endl;
						last_record = attempts;
						break;
					}
					else {
						int difference = user_number - number_to_guess;

						if (difference > 10) {
							std::cout << "My number is less!\n";
						}
						else if (difference < -10) {
							std::cout << "My number is bigger!\n";
						}
						else if (difference > 0) {
							std::cout << "You are close, but the number is less...\n";
						}
						else if (difference < 0) {
							std::cout << "You are close, but the number is bigger...\n";
						}
					}
				}

				char play_again = 0;
				std::cout << "Do you want to play again? (y/n): ";
				std::cin >> play_again;

				if (play_again == 'y' || play_again == 'Y') {
					continue;
				}
				else if (play_again == 'n' || play_again == 'N') {
					break;
				}

			}
			break;
		case 2:
			std::cout << "-----HELP-----" << std::endl << std::endl;
			std::cout << "Guess the number that the computer generates randomly within the given range.\n";
			std::cout << "The available difficulty levels determine the range and maximum number of attempts.\n";
			std::cout << "Go ahead! Challenge the computer!\n";
			break;
		case 3:
			std::cout << "-----STATISTICS-----" << std::endl << std::endl;
			std::cout << "1 - BEST GAME: " << best_record << " attempts" << std::endl;
			std::cout << "2 - LAST GAME: " << last_record << " attempts" << std::endl;
			break;
		case 4:
			std::cout << "WEAKLY!\n";
			return 0;
		default:
			std::cout << "Wrong value! Try again!\n";
		}
	}

	return 0;
}