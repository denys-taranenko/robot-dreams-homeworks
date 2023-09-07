#include <iostream>
#include <string>
#include <stack>

#include "UniqueWords.h"
#include "MostOccuredWord.h"
#include "BracketsBalanced.h"


int main()
{
    //Task 1
    std::string testLine = "Hello Hey Hello Bye Hey";

    unsigned int count = uniqueWordsCount(testLine);
    std::cout << "Number of unique words: " << count << std::endl << std::endl;

    //Task 2
    std::string inputLine = "apple banana apple banana cherry apple";
    std::string mostCommon = mostOccuredWord(inputLine);
    std::cout << "Most common word: " << mostCommon << std::endl << std::endl;

    //Task 3
    std::string firstLine = "{[()][]}()";
    std::string secondLine = "[{]}";

    if (areBracketsBalanced(firstLine)) 
    {
        std::cout << "First line - is balanced.\n";
    }
    else 
    {
        std::cout << "First line - is not balanced.\n";
    }

    if (areBracketsBalanced(secondLine)) 
    {
        std::cout << "Second line - is balanced.\n";
    }
    else 
    {
        std::cout << "Second line - is not balanced.\n";
    }

    return 0;
}