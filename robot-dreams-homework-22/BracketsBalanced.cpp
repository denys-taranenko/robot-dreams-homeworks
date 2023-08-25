#include <stack>

#include "BracketsBalanced.h"

bool areBracketsBalanced(const std::string& expression) 
{
    std::stack<char> bracketsStack;

    for (char bracket : expression) 
    {
        if (bracket == '(' || bracket == '{' || bracket == '[') 
        {
            bracketsStack.push(bracket);
        }
        else if (bracket == ')' || bracket == '}' || bracket == ']') 
        {
            if (bracketsStack.empty()) 
            {
                return false;
            }

            char openBracket = bracketsStack.top();
            bracketsStack.pop();

            if ((bracket == ')' && openBracket != '(') ||
                (bracket == '}' && openBracket != '{') ||
                (bracket == ']' && openBracket != '[')) 
            {
                return false;
            }
        }
    }

    return bracketsStack.empty();
}