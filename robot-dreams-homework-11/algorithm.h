#pragma once

bool linearSearch(int** arr, int rows, int columns, int target);
enum class SortingDirection;
bool isSorted(const int* arr, int size, SortingDirection direction);
void traverseByColumns(int** arr, int rows, int columns);
void traverseByRows(int** arr, int rows, int columns);