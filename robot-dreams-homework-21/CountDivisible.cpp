#include "CountDivisible.h"
#include <algorithm>

unsigned int CountDivisible::operator()(const std::vector<int>& vec) const 
{
    return std::count_if(vec.begin(), vec.end(), [this](int element) 
        {
        return element % m_divisor == 0;
        });
}