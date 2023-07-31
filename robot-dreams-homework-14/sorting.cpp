#include <iostream>
#include "structures.h"

int partition(Student students[], int low, int high) {
    
    float pivot = calculateAverage(students[high]);
    int pointer_idx = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (calculateAverage(students[j]) <= pivot)
        {
            pointer_idx++;
            std::swap(students[pointer_idx], students[j]);
        }
    }

    std::swap(students[pointer_idx + 1], students[high]);

    return (pointer_idx + 1);
}

void quickSort(Student students[], int low, int high) {

    if (low < high)
    {
        int partition_idx = partition(students, low, high);
        quickSort(students, low, partition_idx - 1);
        quickSort(students, partition_idx + 1, high);
    }
}