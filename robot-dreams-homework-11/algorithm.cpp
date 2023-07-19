#include <iostream>

bool linearSearch(int** arr, int rows, int columns, int target) {

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }

    return false;
}


enum class SortingDirection {
    ascending,
    descending
};


bool isSorted(const int* arr, int size, SortingDirection direction) {

    if (direction == SortingDirection::ascending)
    {
        for (int i = 1; i < size; ++i)
        {
            if (arr[i] < arr[i - 1])
            {
                return false;
            }
        }
    }
    else if (direction == SortingDirection::descending)
    {
        for (int i = 1; i < size; ++i)
        {
            if (arr[i] > arr[i - 1])
            {
                return false;
            }
        }
    }

    return true;
}


void traverseByColumns(int** arr, int rows, int columns) {

    for (int i = columns - 1; i >= 0; i--)
    {
        for (int j = 0; j < rows; j++)
        {
            std::cout << arr[j][i] << " ";
        }
    }

    std::cout << std::endl;
}


void traverseByRows(int** arr, int rows, int columns) {

    for (int i = rows - 1; i >= 0; i--)
    {
        bool isOddRow = (rows - 1 - i) % 2 == 0;

        if (isOddRow)
        {

            for (int j = 0; j < columns; j++)
            {
                std::cout << arr[i][j] << " ";
            }
        }
        else
        {

            for (int k = columns - 1; k >= 0; k--)
            {
                std::cout << arr[i][k] << " ";
            }
        }
    }

    std::cout << std::endl;
}