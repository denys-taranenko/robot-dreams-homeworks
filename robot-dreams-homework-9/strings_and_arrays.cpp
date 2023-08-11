#include <iostream>
#include <cctype>
#include <cstring>

void translateArray(int numbers[], int size) {

	for (int i = 0; i < size; i++)
	{
		if (numbers[i] > 0)
		{
			numbers[i] *= 2;
		}
		else
		{
			numbers[i] = 0;
		}
	}
}

void toUppercase(char str[]) {

	int length = strlen(str);
	
	for (int i = 0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
	}
}

bool isPalindrom(const char str[]) {

	int left = 0;
	int right = strlen(str) - 1;

	while (left < right)
	{
		if (str[left] != str[right])
		{
			return false;
		}

		left++;
		right--;
	}

	return true;
}

void parseStringLetters(const char str[], int& vowels_count, int& constonants_count) {

	vowels_count = 0;
	constonants_count = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		char letter = std::tolower(str[i]);

		if (std::isalpha(letter))
		{
			if (std::strchr("aeiou", letter) != nullptr)
			{
				vowels_count++;
			}
			else
			{
				constonants_count++;
			}
		}
	}
}

bool isEqual(const char str1[], const char str2[]) {
	size_t length_1 = strlen(str1);
	size_t length_2 = strlen(str2);

	if (length_1 != length_2) {
		return false;
	}

	for (size_t i = 0; i < length_1; i++) {
		if (str1[i] != str2[i]) {
			return false;
		}
	}

	return true;
}