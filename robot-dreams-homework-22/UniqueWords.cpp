#include <set>
#include <sstream>

#include "UniqueWords.h"

unsigned int uniqueWordsCount(const std::string& line)
{
    std::set<std::string> uniqueWords;
    std::istringstream split(line);

    std::string word = "";

    while (split >> word)
    {
        uniqueWords.insert(word);
    }

    return uniqueWords.size();
}