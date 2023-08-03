#include <iostream>
#include "sorting.h"

int main() {
    
    const int SIZE = 10;
    const int ROWS = 5;

    int arr[SIZE] = { 5, 8, 15, 36, 44, 89, 127, 1, 6, 16 };

    int arr_2d[ROWS][COLUMN] = {
        { 7, 3, 9, 5, 1 },
        { 4, 2, 8, 6, 2 },
        { 5, 1, 7, 3, 9 },
        { 2, 8, 4, 2, 8 },
        { 1, 6, 3, 9, 5 }
    };

    // Task 1

    bubleSort(arr, SIZE);
    printArray(arr, SIZE);

    std::cout << std::endl << std::endl;

    // Task 2

    SortingDirection direction = SortingDirection::ByRows;
    sort(arr_2d, ROWS, direction);
    printArray(arr_2d, ROWS);

    std::cout << std::endl << std::endl;

    direction = SortingDirection::ByColumn;
    sort(arr_2d, ROWS, SortingDirection::ByColumn);
    printArray(arr_2d, ROWS);

    return 0;
}