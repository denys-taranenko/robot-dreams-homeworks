#include <iostream>
#include "structures.h"

int partition(Student students[], int low, int high, int num_grades) {

    float pivot = calculateAverage(students[high], num_grades);
    int pointer_idx = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (calculateAverage(students[j], num_grades) <= pivot)
        {
            pointer_idx++;
            std::swap(students[pointer_idx], students[j]);
        }
    }

    std::swap(students[pointer_idx + 1], students[high]);

    return (pointer_idx + 1);
}

void quickSort(Student students[], int low, int high, int num_grades) {

    if (low < high)
    {
        int partition_idx = partition(students, low, high, num_grades);
        quickSort(students, low, partition_idx - 1, num_grades);
        quickSort(students, partition_idx + 1, high, num_grades);
    }
}