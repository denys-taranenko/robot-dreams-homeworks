#include <iostream>
#include <iomanip>
#include "optional_for_arrays.h"
#include "strings_and_arrays.h"

int main() {
	
	const int INT_ARRAY_LENGTH = 10;
	const int CHAR_ARRAY_LENGTH = 256;
	
	//Task 1
	
	int numbers[INT_ARRAY_LENGTH]{};

	std::cout << "Enter 10 values separated by a space: ";
	
	writeToArray(numbers, INT_ARRAY_LENGTH);
	translateArray(numbers, INT_ARRAY_LENGTH);
	printArray(numbers, INT_ARRAY_LENGTH);

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << std::endl << std::endl;

	//Task 2
	
	char str_for_uppercase[CHAR_ARRAY_LENGTH]{};

	std::cout << "Enter a string to convert to UPPERCASE: ";
	
	writeToArray(str_for_uppercase, CHAR_ARRAY_LENGTH);
	toUppercase(str_for_uppercase);
	printArray(str_for_uppercase);

	std::cout << std::endl << std::endl;

	//Task 3

	char str_palindrome[CHAR_ARRAY_LENGTH]{};
	
	std::cout << "Enter a palindrome (well, or not a palindrome): ";

	writeToArray(str_palindrome, CHAR_ARRAY_LENGTH);

	if (isPalindrom(str_palindrome))
	{
		std::cout << std::boolalpha << true;
	}
	else
	{
		std::cout << std::boolalpha << false;
	}

	std::cout << std::endl << std::endl;

	//Task 4

	char str_vowels_and_consonants[CHAR_ARRAY_LENGTH]{};
	int vowels_count = 0;
	int constonants_count = 0;

	std::cout << "Enter a string to count the number of vowels and constonants: ";

	writeToArray(str_vowels_and_consonants, CHAR_ARRAY_LENGTH);
	parseStringLetters(str_vowels_and_consonants, vowels_count, constonants_count);

	std::cout << "Number of vowels: " << vowels_count << std::endl;
	std::cout << "Number of consonants: " << constonants_count << std::endl;

	std::cout << std::endl << std::endl;

	//Task 5

	char first_str[CHAR_ARRAY_LENGTH]{};
	char second_str[CHAR_ARRAY_LENGTH]{};

	std::cout << "Enter the first string to compare: ";
	writeToArray(first_str, CHAR_ARRAY_LENGTH);

	std::cout << "Enter the second string to compare: ";
	writeToArray(second_str, CHAR_ARRAY_LENGTH);

	if (isEqual(first_str, second_str))
	{
		std::cout << std::boolalpha << true;
	}
	else
	{
		std::cout << std::boolalpha << false;
	}

	return 0;
}