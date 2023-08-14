#pragma once

int* allocateArray(int size);
void clearArray(int* numbers);
int** allocateArrayOfArrays(int rows, int columns);
void clearArrayOfArrays(int** array_ptr, int rows);