#pragma once
#include <string>

class LengthComparator 
{
public:
    bool operator()(const std::string& start, const std::string& end);
};