#pragma once

#include <iostream>


enum class VectorRelativeState
{
    Identical,
    coDirected,
    OppositeDirected,
    AcuteAngle,
    ObtuseAngle,
    RightAngle
};


class Vector2D 
{
private:
    float x = 0.0f;
    float y = 0.0f;

public:
    Vector2D(float x_val = 0.0f, float y_val = 0.0f)
        : x(x_val), y(y_val) {}
    
    //HM #25
    Vector2D(float x0, float y0, float x1, float y1)
    {
        x = x1 - x0;
        y = y1 - y0;
    }

    const Vector2D& operator=(const Vector2D& other);
    const Vector2D operator+(const Vector2D& second_vector);
    const Vector2D operator-(const Vector2D& second_vector);
    float operator()() const;
    float& operator[](int i);

    friend std::ostream& operator<<(std::ostream& os, const Vector2D& vector);
    friend std::istream& operator>>(std::istream& is, Vector2D& vector);

    //HM #25
    float dotProduct(const Vector2D& other) const;
    Vector2D crossProduct(Vector2D& other) const;
    Vector2D negate() const;
    VectorRelativeState getRelativeState(const Vector2D& other) const;
    void scale(float factor_X, float factor_Y);
};