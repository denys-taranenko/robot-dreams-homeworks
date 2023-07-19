#include <iostream>
#include <iomanip>
#include "algorithm.h"

enum class SortingDirection {
    ascending,
    descending
};

int main()
{
    const int ROWS = 4;
    const int COLUMNS = 6;
    
    int arr_2d[ROWS][COLUMNS] = {
        { 11, 12, 13, 14, 15, 16 },
        { 21, 22, 23, 24, 25, 26 },
        { 31, 32, 33, 34, 35, 36 },
        { 41, 42, 43, 44, 45, 46 }
    };

    int* ptr_arr[ROWS];
    for (int i = 0; i < ROWS; i++) 
    {
        ptr_arr[i] = arr_2d[i];
    }

    int arr_ascending[COLUMNS] = { 1, 2, 3, 4, 5, 6 };
    int arr_descending[COLUMNS] = { 6, 5, 4, 3, 2, 1 };

    //Task 1

    std::cout << std::boolalpha << linearSearch(ptr_arr, ROWS, COLUMNS, 46) << std::endl;
    std::cout << std::boolalpha << linearSearch(ptr_arr, ROWS, COLUMNS, 236) << std::endl;

    //Task 2

    std::cout << isSorted(arr_ascending, COLUMNS, SortingDirection::ascending) << std::endl;
    std::cout << isSorted(arr_descending, COLUMNS, SortingDirection::descending) << std::endl;

    std::cout << isSorted(arr_ascending, COLUMNS, SortingDirection::descending) << std::endl;
    std::cout << isSorted(arr_descending, COLUMNS, SortingDirection::ascending) << std::endl;

    //Task 3

    traverseByColumns(ptr_arr, ROWS, COLUMNS);
    traverseByRows(ptr_arr, ROWS, COLUMNS);

    return 0;
}