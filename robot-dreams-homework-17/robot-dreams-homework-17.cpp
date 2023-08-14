#include <iostream>
#include <vld.h>
#include <cstring>
#include "dynamic_int_array.h"
#include "string_custom.h"
#include "array_operations.h"


int main() {
    
    //Task 1
    
    DynamicIntArray array_1(5);
    for (std::size_t i = 0; i < array_1.getSize(); ++i) {
        array_1[i] = i * 2;
    }

    std::cout << "array_1 content: ";
    for (std::size_t i = 0; i < array_1.getSize(); ++i) {
        std::cout << array_1[i] << " ";
    }
    std::cout << "\n";

    DynamicIntArray array_2(array_1);
    std::cout << "array_2 content (copied from array_1): ";
    for (std::size_t i = 0; i < array_2.getSize(); ++i) {
        std::cout << array_2[i] << " ";
    }
    std::cout << "\n";

    DynamicIntArray array_3;
    array_3 = array_2;
    std::cout << "array_3 content (copied from array_2): ";
    for (std::size_t i = 0; i < array_3.getSize(); ++i) {
        std::cout << array_3[i] << " ";
    }
    std::cout << "\n";

    array_3.push_back(12);
    std::cout << "array_3 content after push_back(12): ";
    for (std::size_t i = 0; i < array_3.getSize(); ++i) {
        std::cout << array_3[i] << " ";
    }
    std::cout << "\n";

    array_3.push_back(24);
    std::cout << "array_3 content after push_back(24): ";
    for (std::size_t i = 0; i < array_3.getSize(); ++i) {
        std::cout << array_3[i] << " ";
    }
    std::cout << "\n";

    array_3.clear();
    std::cout << "array_3 size after clear: " << array_3.getSize() << "\n";

    //Task 2

    StringCustom a;
    a = "Hello";
    a = "There";

    StringCustom b("Hello Here");
    b.assign("Simple hello");

    int ArraySize = 10;
    int* arrayInt = allocateArray(ArraySize);
    clearArray(arrayInt);

    int rows = 10;
    int columns = 20;
    int** array = allocateArrayOfArrays(rows, columns);
    clearArrayOfArrays(array, rows);

    return 0;
}
