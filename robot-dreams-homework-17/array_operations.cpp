#include "array_operations.h"

int* allocateArray(int size) {
    int* array_int = new int[size];
    return array_int;
}

void clearArray(int* numbers) {
    delete[] numbers;
}

int** allocateArrayOfArrays(int rows, int columns) {
    int** array_ptr = new int* [rows];

    for (int i = 0; i < rows; i++) 
    {
        array_ptr[i] = new int[columns];
    }
    return array_ptr;
}

void clearArrayOfArrays(int** array_ptr, int rows) {
    for (int i = 0; i < rows; i++) 
    {
        delete[] array_ptr[i];
    }
    delete[] array_ptr;
}