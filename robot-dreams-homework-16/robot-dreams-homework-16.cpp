#include <iostream>
#include <cmath>
#include "rectangle.h"
#include "vector.h"

int main()
{
    //Task 1

    Rectangle rectangle_1;
    Rectangle rectangle_2(5.0f, 3.0f);
    Rectangle rectangle_3(8.3f, 4.3f);

    std::cout << rectangle_1 << std::endl;
    std::cout << rectangle_2 << std::endl;
    std::cout << rectangle_3 << std::endl;

    std::cout << "Total Rectangles created: " << Rectangle::getCount() << std::endl << std::endl;

    //Task 2

    Vector2D vector_1{ 1.2f, 5.6f };
    Vector2D vector_2{ 3.4f, 7.8f };

    Vector2D result_1 = vector_1 + vector_2;
    Vector2D result_2 = vector_1 - vector_2;

    std::cout << "vector_1 + vector_2 = " << result_1 << std::endl;
    std::cout << "vector_1 - vector_2 = " << result_2 << std::endl << std::endl;

    std::cout << "Length of vector_1: " << vector_1() << std::endl;
    std::cout << "Length of vector_2: " << vector_2() << std::endl << std::endl;

    vector_1[0] = 10.0;
    vector_1[1] = 20.0;
    std::cout << "vector_1 after modification: " << vector_1 << std::endl << std::endl;

    std::cout << "vector_2: " << vector_2 << std::endl << std::endl;

    std::cout << "Enter x and y coordinates for a new vector: ";
    Vector2D new_vector;
    std::cin >> new_vector;
    std::cout << "New vector: " << new_vector << std::endl;

    return 0;
}






