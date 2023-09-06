#include <iostream>

#include "WorkWithVector.h"

int main()
{
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
    std::cout << "New vector: " << new_vector << std::endl << std::endl;

    //HM #25

    Vector2D vector_3(1.0f, 2.0f);
    Vector2D vector_4(3.0f, 4.0f);

    Vector2D vector_5(1.0f, 2.0f, 3.0f, 4.0f);

    float dot_result = vector_3.dotProduct(vector_4);
    std::cout << "Dot Product: " << dot_result << std::endl;

    Vector2D cross_result = vector_3.crossProduct(vector_4);
    std::cout << "Cross Product: " << cross_result << std::endl;

    Vector2D negated = vector_3.negate();
    std::cout << "Negated Vector: " << negated << std::endl;

    VectorRelativeState relative_state = vector_3.getRelativeState(vector_4);
    std::cout << "Relative State: ";
    switch (relative_state)
    {
    case VectorRelativeState::Identical:
        std::cout << "Identical";
        break;
    case VectorRelativeState::coDirected:
        std::cout << "Co-Directed";
        break;
    case VectorRelativeState::OppositeDirected:
        std::cout << "Opposite Directed";
        break;
    case VectorRelativeState::AcuteAngle:
        std::cout << "Acute Angle";
        break;
    case VectorRelativeState::ObtuseAngle:
        std::cout << "Obtuse Angle";
        break;
    case VectorRelativeState::RightAngle:
        std::cout << "Right Angle";
        break;
    default:
        std::cout << "Unknown";
        break;
    }
    std::cout << std::endl;

    vector_3.scale(2.0f, 2.0f);
    std::cout << "Scaled Vector1: " << vector_3 << std::endl;

    return 0;
}