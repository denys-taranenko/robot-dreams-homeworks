#include <iostream>

class Rectangle {

private:

    float length = 0.0f;
    float height = 0.0f;

private:

    friend std::ostream& operator<<(std::ostream& os, const Rectangle& rect);

public:

    Rectangle();
    Rectangle(float len, float hgt);

public:

    float getArea() const;
    float getPerimeter() const;
};