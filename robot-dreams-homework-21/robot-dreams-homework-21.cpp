#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include "compareByLength.h"
#include "LengthComparator.h"
#include "CountDivisible.h"

int main()
{
    //Task 1  
    std::vector<std::string> string_container = { "Sword", "Hammer", "Axe", "Cudgel", "Bow" };

    std::sort(string_container.begin(), string_container.end(), compareByLength);

    std::cout << "Sorting using simple function:" << std::endl;
    for (const std::string& str : string_container) 
    {
        std::cout << str << std::endl;
    }

    LengthComparator lengthComparator;
    std::sort(string_container.begin(), string_container.end(), lengthComparator);

    std::cout << "\nSorting using functional object:" << std::endl;
    for (const std::string& str : string_container) 
    {
        std::cout << str << std::endl;
    }

    std::sort(string_container.begin(), string_container.end(),
        [](const std::string& start, const std::string& end) 
        {
            return start.length() < end.length();
        });

    std::cout << "\nSorting using lambda:" << std::endl;
    for (const std::string& str : string_container) 
    {
        std::cout << str << std::endl;
    }

    //Task 2
    std::vector<int> numbers = { 12, 7, 30, 21, 45, 9 };
    int divisor = 3;

    CountDivisible countDivisible(divisor);
    unsigned int count = countDivisible(numbers);

    std::cout << "\nNumber of elements divisible by " << divisor << ": " << count << std::endl;

    return 0;
}