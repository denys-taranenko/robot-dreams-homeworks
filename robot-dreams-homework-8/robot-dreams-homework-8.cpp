#include <iostream>
#include "cycle_functions.h"
#include "recursion_functions.h"

int main()
{
    //Task 1
    
    int number_values = 0;

    std::cout << "Enter the number of values: ";
    std::cin >> number_values;

    if (number_values <= 0)
    {
        std::cout << "Invalid input. Number of values should be positive." << std::endl;
        return 0;
    }

    std::cout << "Enter the number: " << std::endl;
    countNumbers(number_values);


    //Task 2

    int user_number = 0;
    std::cout << "Enter a number: ";
    std::cin >> user_number;

    if (user_number < 0)
    {
        std::cout << "Invalid input. Factorial accepts 0 and positive numbers." << std::endl;
        return 0;
    }

    int loop_factorial = factorialUsingLoop(user_number);
    std::cout << "Factorial (using a loop): " << loop_factorial << std::endl;

    int recursion_factorial = factorialUsingRecursion(user_number);
    std::cout << "Factorial (using recursion): " << recursion_factorial << std::endl << std::endl;
    

    //Task 3

    int natural_numbers = 0;
    std::cout << "Enter the number of numbers: ";
    std::cin >> natural_numbers;

    std::cout << "Natural numbers using a loop" << std::endl;

    printNaturalNumbersCycleA(natural_numbers);
    printNaturalNumbersCycleB(natural_numbers);

    std::cout << "Natural numbers using recursion" << std::endl;

    printNaturalNumbersRecursionC(natural_numbers);
    printNaturalNumbersRecursionD(natural_numbers);

    return 0;
}