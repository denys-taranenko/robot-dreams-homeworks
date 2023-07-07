#include <iostream>

int factorialUsingRecursion(int count)
{
    if (count == 0 || count == 1)
    {
        return 1;
    }
    return count * factorialUsingRecursion(count - 1);
}


void printNaturalNumbersRecursionC(int count)
{
    if (count == 0)
    {
        std::cout << std::endl;
        return;
    }

    std::cout << count << " ";
    printNaturalNumbersRecursionC(count - 1);
}


void printNaturalNumbersRecursionD(int count)
{
    if (count >= 1)
    {
        printNaturalNumbersRecursionD(count - 1);
        std::cout << count << " ";
    }
}