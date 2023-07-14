#include <iostream>
#include <ctime>
#include <random>
#include <limits>
#include <climits>

void displayMainMenu()
{
	using std::cout;
	using std::endl;

	cout << "-----MAIN MENU-----" << endl << endl;
	cout << "1 - New Game\n";
	cout << "2 - Help\n";
	cout << "3 - Statistics\n";
	cout << "4 - Quit\n";
	cout << "Choose one of the options (1 - 4): ";
}


void displayHelp()
{
	using std::cout;
	using std::endl;

	cout << "-----HELP-----" << endl << endl;
	cout << "Guess the number that the computer generates randomly within the given range.\n";
	cout << "The available difficulty levels determine the range and maximum number of attempts.\n";
	cout << "Go ahead! Challenge the computer!\n";
}


void displayStatistics(int best_record, int last_record)
{
	using std::cout;
	using std::endl;

	cout << "-----STATISTICS-----" << endl << endl;
	cout << "1 - BEST GAME: " << best_record << " attempts" << endl;
	cout << "2 - LAST GAME: " << last_record << " attempts" << endl;
}


void handleInvalidInput()
{
	using std::cout;
	using std::cin;

	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "Wrong value! Try again!\n";
}


int getDifficultyLevel()
{
	using std::cout;
	using std::cin;
	using std::endl;

	int difficulty_level = 0;

	cout << "-----DIFFICULTY LEVEL-----" << endl << endl;
	cout << "1 - Weakly (from 0 to 50)\n";
	cout << "2 - Medium (-50 to 50)\n";
	cout << "3 - Unreal (-50 to 50, 7 attempts in total)\n";
	cout << "Make your choice (1 - 3): ";

	cin >> difficulty_level;

	if (!cin)
	{
		handleInvalidInput();
		return getDifficultyLevel();
	}

	return difficulty_level;
}


int generateRandomNumber(int difficulty_level)
{
	const int WEAKLY_MAX_RANGE = 51;
	const int MAX_RANGE = 50;
	const int MIN_RANGE = 101;

	std::mt19937 rng(time(0));
	while (true)
	{
		switch (difficulty_level)
		{
		case 1: 
			return rng() % WEAKLY_MAX_RANGE;
		case 2:
		case 3: 
			return rng() % MIN_RANGE - MAX_RANGE;
		default:
			handleInvalidInput();
		}
	}
}


int getUserNumber()
{
	using std::cout;
	using std::cin;

	int user_number = 0;

	cout << "Try to guess: ";
	cin >> user_number;

	while (!cin)
	{
		handleInvalidInput();
		cout << "Try to guess again: ";
		cin >> user_number;
	}

	return user_number;
}


bool askToPlayAgain()
{
	using std::cout;
	using std::cin;

	char play_again = 0;

	cout << "Do you want to play again? (y/n): ";
	cin >> play_again;

	if (play_again == 'y' || play_again == 'Y')
	{
		return true;
	}
	else if (play_again == 'n' || play_again == 'N')
	{
		return false;
	}
	else {
		handleInvalidInput();
		return askToPlayAgain();
	}
}


void startNewGame(int difficulty_level, int& best_record, int& last_record)
{
	using std::cout;
	using std::endl;

	const int HIGH_DIFFICULTY_ATTEMPS = 7;
	int attempts = 0;
	int number_to_guess = generateRandomNumber(difficulty_level);
	const int max_attempts = (difficulty_level == 3) ? HIGH_DIFFICULTY_ATTEMPS : INT_MAX;

	cout << "WELL! I MADE A NUMBER!\n";

	while (true)
	{
		int user_number = getUserNumber();
		attempts++;

		if (user_number > 50 || user_number < -50)
		{
			cout << "YOU DID NOT READ ABOUT RANGES!\n";
			continue;
		}

		if (user_number == number_to_guess)
		{
			if (attempts == 1)
			{
				cout << "THIS IS IMPOSSIBLE! HOW DID YOU DO THIS!? Cheater!" << endl << endl;
			}
			else
			{
				cout << "CONGRATULATIONS! You guessed the number by " << attempts << " attempts!" << endl << endl;
			}
			if (attempts < best_record || best_record == 0)
			{
				best_record = attempts;
				cout << "NEW RECORD!!! " << best_record << " ATTEMPTS!" << endl << endl;
			}

			last_record = attempts;

			break;
		}
		else if (attempts >= max_attempts)
		{
			cout << "Expected! YOU LOST AND I WON! I came up with a number: " << number_to_guess << endl;
			last_record = attempts;
			break;
		}
		else
		{
			int difference = user_number - number_to_guess;

			if (difference > 10)
			{
				cout << "My number is less!\n";
			}
			else if (difference < -10)
			{
				cout << "My number is bigger!\n";
			}
			else if (difference > 0)
			{
				cout << "You are close, but the number is less...\n";
			}
			else if (difference < 0)
			{
				cout << "You are close, but the number is bigger...\n";
			}
		}
	}
}


void playGame()
{
	using std::cout;
	using std::cin;
	using std::endl;

	std::mt19937 rng(time(0));

	int best_record = 0;
	int last_record = 0;

	cout << "HELLO! AND WELCOME TO THE GAME \"GUESS THE NUMBER\"!\n";
	cout << "Try to defeat the ARTIFICIAL INTELLIGENCE!" << endl << endl;

	while (true)
	{
		displayMainMenu();

		int choice_menu = 0;
		cin >> choice_menu;

		if (!cin)
		{
			handleInvalidInput();
			continue;
		}

		switch (choice_menu)
		{
		case 1: {
			while (true)
			{
				int difficulty_level = getDifficultyLevel();
				startNewGame(difficulty_level, best_record, last_record);

				if (!askToPlayAgain())
				{
					break;
				}
			}
			break;
		}
		case 2:
			displayHelp();
			break;
		case 3:
			displayStatistics(best_record, last_record);
			break;
		case 4:
			cout << "WEAKLY!\n";
			return;
		default:
			handleInvalidInput();
		}
	}
}