#include <cmath>

#include "WorkWithVector.h"


const Vector2D& Vector2D::operator=(const Vector2D& other) 
{
    x = other.x;
    y = other.y;
    return *this;
}


const Vector2D Vector2D::operator+(const Vector2D& second_vector) 
{
    return Vector2D(x + second_vector.x, y + second_vector.y);
}


const Vector2D Vector2D::operator-(const Vector2D& second_vector) 
{
    return Vector2D(x - second_vector.x, y - second_vector.y);
}


float Vector2D::operator()() const 
{
    return std::sqrt(x * x + y * y);
}


float& Vector2D::operator[](int i) 
{
    return (i == 0) ? x : y;
}


std::ostream& operator<<(std::ostream& os, const Vector2D& vector) 
{
    os << "{" << vector.x << "; " << vector.y << "}";
    return os;
}


std::istream& operator>>(std::istream& is, Vector2D& vector) 
{
    is >> vector.x >> vector.y;
    return is;
}


//HM #25
float Vector2D::dotProduct(const Vector2D& other) const
{
    return x * other.x + y * other.y;
}


Vector2D Vector2D::crossProduct(Vector2D& other) const
{
    return Vector2D(0, 0, x * other.y, y * other.x);
}


Vector2D Vector2D::negate() const
{
    return Vector2D(-x, -y);
}


VectorRelativeState Vector2D::getRelativeState(const Vector2D& other) const
{
    float dot = dotProduct(other);
    float magnitude_1 = (*this)();
    float magnitude_2 = other();

    if (dot == 0) 
    {
        return VectorRelativeState::RightAngle;
    }
    else if (dot > 0) 
    {
        return VectorRelativeState::coDirected;
    }
    else 
    {
        return VectorRelativeState::OppositeDirected;
    }
}

void Vector2D::scale(float factor_X, float factor_Y)
{
    x *= factor_X;
    y *= factor_Y;
}