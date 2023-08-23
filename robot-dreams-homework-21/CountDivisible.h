#pragma once
#include <vector>

class CountDivisible {
public:
    CountDivisible(int divisor) : m_divisor(divisor) {}

    unsigned int operator()(const std::vector<int>& vec) const;

private:
    int m_divisor = 0;
};