#include <iostream>
#include <vld.h>

#include "DynamicArray.h"
#include "InplaceArray.h"

int main()
{
    //Dynamic Array
    
    DynamicArray<int> dynamicArray;

    dynamicArray.push_back(5);
    dynamicArray.push_back(10);
    dynamicArray.push_back(15);

    std::cout << "Array size: " << dynamicArray.getSize() << std::endl;
    std::cout << "Array capacity: " << dynamicArray.getCapacity() << std::endl;

    dynamicArray.reserve(10);
    std::cout << "Array capacity after reserving: " << dynamicArray.getCapacity() << std::endl;

    dynamicArray.shrinkToFit();
    std::cout << "Array capacity after shrinking: " << dynamicArray.getCapacity() << std::endl;

    std::cout << "Array elements: ";
    for (std::size_t i = 0; i < dynamicArray.getSize(); i++) 
    {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    dynamicArray.pop_back();
    std::cout << "Array size after pop_back: " << dynamicArray.getSize() << std::endl;

    std::cout << "Array back element: " << dynamicArray.back() << std::endl;

    DynamicArray<int> dynamicArray2 = dynamicArray;
    if (dynamicArray == dynamicArray2) 
    {
        std::cout << "Arrays are equal." << std::endl << std::endl;
    }
    else 
    {
        std::cout << "Arrays are not equal." << std::endl << std::endl;
    }

    //Inplace Array

    InplaceArray<int, 10> inplaceArray;

    for (int i = 0; i < 5; i++) 
    {
        inplaceArray.push_back(i);
    }

    std::cout << "InplaceArray size: " << inplaceArray.size() << std::endl;
    std::cout << "InplaceArray capacity: " << inplaceArray.capacity() << std::endl;

    for (std::size_t i = 0; i < inplaceArray.size(); i++) 
    {
        std::cout << "inplaceArr[" << i << "] = " << inplaceArray[i] << std::endl;
    }

    inplaceArray.pop_back();

    std::cout << "After pop_back(), InplaceArray size: " << inplaceArray.size() << std::endl;

    try 
    {
        int value = inplaceArray[4];
        std::cout << "inplaceArr[4] = " << value << std::endl;
    }
    catch (const std::out_of_range& e) 
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}