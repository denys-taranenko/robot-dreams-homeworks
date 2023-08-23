#include "CompareByLength.h"

bool compareByLength(const std::string& start, const std::string& end) 
{
    return start.length() < end.length();
}