#include "SpecialChar.h"

char findSpecialChar(char target, int current)
{ 
    char result = ((char) current == target) ?
    char (current) :
    findSpecialChar(target, current + 1);

    return result;
}