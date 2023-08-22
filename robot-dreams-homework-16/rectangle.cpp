#include "rectangle.h"

int Rectangle::count = 0;

std::ostream& operator<<(std::ostream& os, const Rectangle& rect) {
    os << "Rectangle: Area = " << rect.getArea() << ", Perimeter = " << rect.getPerimeter();
    return os;
}

Rectangle::Rectangle() {
    count++;
}

Rectangle::Rectangle(float len, float hgt)
    : length(len), height(hgt) {
    count++;
}

float Rectangle::getArea() const {
    return length * height;
}

float Rectangle::getPerimeter() const {
    return 2 * (length + height);
}

int Rectangle::getCount() {
    return count;
}