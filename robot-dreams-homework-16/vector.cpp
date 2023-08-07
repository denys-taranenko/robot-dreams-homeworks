#include <cmath>
#include "vector.h"

Vector2D::Vector2D(float x_val, float y_val)
    : x(x_val), y(y_val) {}

Vector2D& Vector2D::operator=(const Vector2D& other) {
    x = other.x;
    y = other.y;
    return *this;
}

Vector2D Vector2D::operator+(const Vector2D& second_vector) {
    return Vector2D(x + second_vector.x, y + second_vector.y);
}

Vector2D Vector2D::operator-(const Vector2D& second_vector) {
    return Vector2D(x - second_vector.x, y - second_vector.y);
}

float Vector2D::operator()() const {
    return std::sqrt(x * x + y * y);
}

float& Vector2D::operator[](int i) {
    return (i == 0) ? x : y;
}

std::ostream& operator<<(std::ostream& os, const Vector2D& vector) {
    os << "{" << vector.x << "; " << vector.y << "}";
    return os;
}

std::istream& operator>>(std::istream& is, Vector2D& vector) {
    is >> vector.x >> vector.y;
    return is;
}