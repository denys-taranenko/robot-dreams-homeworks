#include <iostream>

void countNumbers(int count)
{
    int positive = 0;
    int negative = 0;
    int zeros = 0;

    for (int i = 0; i < count; i++)
    {
        int user_number = 0;
        std::cin >> user_number;

        if (user_number > 0)
        {
            positive++;
        }
        else if (user_number < 0)
        {
            negative++;
        }
        else
        {
            zeros++;
        }
    }

    std::cout << "Positive numbers: " << positive << std::endl;
    std::cout << "Negative numbers: " << negative << std::endl;
    std::cout << "Zeroes: " << zeros << std::endl << std::endl;
}


int factorialUsingLoop(int count)
{

    int result = 1;

    for (int i = 1; i <= count; i++)
    {
        result *= i;
    }
    return result;
}


void printNaturalNumbersCycleA(int count)
{
    for (int i = count; i >= 1; i--)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
}


void printNaturalNumbersCycleB(int count)
{
    for (int i = 1; i <= count; i++)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
}