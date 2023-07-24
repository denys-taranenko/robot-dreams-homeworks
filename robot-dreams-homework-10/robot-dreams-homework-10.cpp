#include <iostream>
#include "links_and_pointers.h"

int main()
{
    
    //Task 1
    
    int first_value = 10;
    int second_value = 20;

    std::cout << "Exchange using links (BEFORE)" << std::endl;
    std::cout << "first_value = " << first_value << std::endl;
    std::cout << "second_value = " << second_value << std::endl << std::endl;

    swap(first_value, second_value);

    std::cout << "Exchange using links (AFTER)" << std::endl;
    std::cout << "first_value = " << first_value << std::endl;
    std::cout << "second_value = " << second_value << std::endl << std::endl;

    std::cout << "Exchange using pointers (BEFORE)" << std::endl;
    std::cout << "first_value = " << first_value << std::endl;
    std::cout << "second_value = " << second_value << std::endl << std::endl;

    swap(&first_value, &second_value);

    std::cout << "Exchange using pointers (AFTER)" << std::endl;
    std::cout << "first_value = " << first_value << std::endl;
    std::cout << "second_value = " << second_value << std::endl << std::endl;

    //Task 2

    const int ARR_SIZE = 5;
    double arr[ARR_SIZE] = { 1.5, 2.0, 3.5, 4.0, 5.5 };
    double sum = 0.0;

    if (calculateSum(arr, ARR_SIZE, sum))
    {
        std::cout << "The sum of the array = " << sum << std::endl << std::endl;
    }
    else 
    {
        std::cout << "Array size is invalid." << std::endl << std::endl;
    }

    //Task 3

    int array[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(array) / sizeof(int);
    int elem = 2;

    if (find(array, size, elem)) 
    {
        std::cout << "Item found!" << std::endl;
    }
    else 
    {
        std::cout << "Item not found." << std::endl;
    }

    return 0;
}