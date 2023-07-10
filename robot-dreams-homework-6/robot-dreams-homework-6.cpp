#include <iostream>
#include <iomanip>
#include <cctype>

int main()
{
    //Task 1

    std::cout << "Enter the first element of the arithmetic progression: ";
    int first_element{};
    std::cin >> first_element;

    std::cout << "Enter the arithmetic progression step: ";
    int step{};
    std::cin >> step;

    std::cout << "Enter the number the last element of the arithmetic progression: ";
    int last_element{};
    std::cin >> last_element;

    std::cout << std::setfill('-') << std::endl;

    std::cout << "Arithmetic progression: ";

    for (int i = 0; i < last_element; i++)
    {
        std::cout << first_element << " ";
        first_element += step;
    }
    std::cout << std::endl;

    std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;

    //Task 2

    std::cout << "Enter the element number of the Fibonacci sequence: ";
    int number{};
    std::cin >> number;

    std::cout << std::setfill('-') << std::endl;

    int current_fib{};
    int prev_fib_2 = 0;
    int prev_fib_1 = 1;

    if (number == 0)
    {
        current_fib = prev_fib_2;
    }
    else if (number == 1)
    {
        current_fib = prev_fib_1;
    }
    else 
    {
        for (int i = 2; i <= number; i++)
        {
            current_fib = prev_fib_2 + prev_fib_1;
            prev_fib_2 = prev_fib_1;
            prev_fib_1 = current_fib;
        }
    }

    std::cout << "The element " << number << " of the Fibonacci sequence " << current_fib << std::endl;

    std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;

    //Task 3

    std::cout << "Enter a positive integer : ";
    int user_number{};
    std::cin >> user_number;

    std::cout << std::setfill('-') << std::endl;

    int factorial = 1;
    for (int i = 1; i <= user_number; i++)
    {
        factorial *= i;
    }

    std::cout << "Factorial of a number " << user_number << " = " << factorial << std::endl;

    std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;

    //Task 4

    std::cout << "Enter the number of rows: ";
    int rows{};
    std::cin >> rows;

    std::cout << std::setfill('-') << std::endl;

    // a)
    std::cout << "a)" << std::endl;
    
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << std::setfill('-') << std::endl;

    // b)
    std::cout << "b)" << std::endl;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << std::setfill('-') << std::endl;

    // c)
    std::cout << "c)" << std::endl;
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << std::setfill('-') << std::endl;

    // d)
    std::cout << "d)" << std::endl;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows + i - 1; j++) {
            if (j <= i - 1) {
                std::cout << " ";
            }
            else {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }

    std::cout << std::setfill('-') << std::endl;

    // e)
    std::cout << "e)" << std::endl;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                std::cout << "1";
            }
            else {
                std::cout << "0";
            }
        }
        std::cout << std::endl;
    }

    std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;

    //Task 5

    char symbol{};
    int sum{};

    while (true) {
        std::cout << "Enter a character: ";
        std::cin >> symbol;

        if (std::islower(symbol)) {
            symbol = std::toupper(symbol);
            std::cout << "Upper case letter: " << symbol << std::endl;
        }
        else if (std::isdigit(symbol)) {
            sum += symbol - '0';
            std::cout << "Current sum of digits: " << sum << std::endl;
        }
        else if (symbol == '.') {
            break;
        }
        else {
            std::cout << "This character is not processed by the program." << std::endl;
        }
    }

    std::cout << std::setw(100) << std::setfill('-') << "" << std::endl;

    std::cout << "THE END!\a";
    
    return 0;
}