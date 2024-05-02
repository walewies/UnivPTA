#include "Int.h"

int findInt(int target, int current)
{
    int result = (current == target) ?
    current :
    findInt(target, current + 1);

    return result;
}

char convertChar(int character){
    return character + '0';
}

