#include <iostream>
#include "NumberUtils.h"
#include "StringUtils.h"
#include "Decipher.h"
using namespace std;

char shiftCharacter(char input, int shift) {
    char base;
    // lowercase
    if (input >= 'a') {
        // cout << input << " L\n";
        base = 'a';
    } else { // UPPERCASE
        // cout << input << " U\n";
        base = 'A';
    }

    int offset = input - base;
    // cout << input << " " << base << " " << offset << "\n";
    int shiftedIndex = shift + offset;
    shiftedIndex = shiftedIndex % 25;

    char result = (char) shiftedIndex + base;

    return result;
}

string decipher(int num1, string str1, int num2, string str2) {
    if (isPalindrome(num1)) {
        str1 = returnDecodedString(str1, sumOfDigits(num1));
    }
    if (isArmstrong(num2) || isPerfect(num2)) {
        str2 = returnDecodedString(str2, sumOfDigits(num2));
    }
    return str1 + "-" + str2;
}