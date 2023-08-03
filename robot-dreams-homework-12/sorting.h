#pragma once

const int COLUMN = 5;

enum class SortingDirection {
    ByRows,
    ByColumn
};

void printArray(int arr[], int size);
void printArray(int arr[][COLUMN], int rows);
void bubleSort(int arr[], int size);
int partition(int array[], int low, int high);
void quickSort(int array[], int low, int high);
void sort(int arr[][COLUMN], int rows, SortingDirection direction);