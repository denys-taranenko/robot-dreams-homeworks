#include "LengthComparator.h"

bool LengthComparator::operator()(const std::string& start, const std::string& end) 
{
    return start.length() < end.length();
}