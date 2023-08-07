#include <iostream>

class Vector2D {

private:

    float x = 0.0f;
    float y = 0.0f;

public:

    Vector2D(float x_val = 0.0f, float y_val = 0.0f);

public:

    Vector2D& operator=(const Vector2D& other);
    Vector2D operator+(const Vector2D& second_vector);
    Vector2D operator-(const Vector2D& second_vector);
    float operator()() const;
    float& operator[](int i);

    friend std::ostream& operator<<(std::ostream& os, const Vector2D& vector);
    friend std::istream& operator>>(std::istream& is, Vector2D& vector);
};