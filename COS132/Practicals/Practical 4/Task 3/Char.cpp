#include "Char.h"

char findNextChar(char current) 
{
    char result = (current == 'z') ?
    'A' :
    (current == 'Z') ?
    'a' :
    static_cast<char>(static_cast<int>(current) + 1);

    return result;
}


char findChar(char target, char current)
{
    char result = (current == target) ?
    current :
    findChar(target, findNextChar(current));

    return result;
}