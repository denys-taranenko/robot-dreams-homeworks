#include "sorting.h"
#include <iostream>

void printArray(int arr[], int size) {
    
    for (int i = 0; i < size - 1; i++) 
    {
        std::cout << arr[i] << " ";
    }
}


void printArray(int arr[][COLUMN], int rows) {
    
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < COLUMN; j++) 
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


void bubleSort(int arr[], int size) {
    
    for (int i = 0; i < size - 1; i++) 
    {
        int swapped = 0;

        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}


int partition(int array[], int low, int high) {
    
    int pivot = array[high];
    int pointerIdx = low;

    for (int j = low; j < high; j++) 
    {
        if (array[j] <= pivot) 
        {
            std::swap(array[pointerIdx], array[j]);
            pointerIdx++;
        }
    }
    std::swap(array[pointerIdx], array[high]);

    return pointerIdx;
}


void quickSort(int array[], int low, int high) {
   
    if (low < high) 
    {
        int partition_idx = partition(array, low, high);
        quickSort(array, low, partition_idx - 1);
        quickSort(array, partition_idx + 1, high);
    }
}


void sort(int arr[][COLUMN], int rows, SortingDirection direction) {
    
    if (direction == SortingDirection::ByRows) 
    {
        for (int i = 0; i < rows; i++) 
        {
            quickSort(arr[i], 0, COLUMN - 1);
        }
    }
    else if (direction == SortingDirection::ByColumn) 
    {
        for (int j = 0; j < COLUMN; j++) 
        {
            int column[COLUMN];
            
            for (int i = 0; i < rows; i++) 
            {
                column[i] = arr[i][j];
            }

            quickSort(column, 0, rows - 1);
            
            for (int i = 0; i < rows; i++) 
            {
                arr[i][j] = column[i];
            }
        }
    }
}