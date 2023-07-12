#include <iostream>

void printArray(int numbers[], int size) {

	for (int i = 0; i < size; i++)
	{
		std::cout << numbers[i] << " ";
	}
}

void printArray(char str[]) {

	std::cout << str;
}

void writeToArray(int numbers[], int size) {

	for (int i = 0; i < size; i++)
	{
		std::cin >> numbers[i];
	}
}

void writeToArray(char str[], int size) {

	std::cin.getline(str, size);
}