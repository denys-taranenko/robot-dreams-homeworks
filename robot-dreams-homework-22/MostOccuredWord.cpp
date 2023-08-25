#include <map>
#include <sstream>

#include "MostOccuredWord.h"

std::string mostOccuredWord(const std::string& line)
{
    std::map<std::string, int> wordCount;
    std::istringstream split(line);

    std::string word = "";

    while (split >> word)
    {
        wordCount[word]++;
    }

    std::string mostCommonWord = "";
    int maxCount = 0;

    for (const auto& pair : wordCount)
    {
        if (pair.second > maxCount)
        {
            mostCommonWord = pair.first;
            maxCount = pair.second;
        }
    }

    return mostCommonWord;
}