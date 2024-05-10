#include "NumberUtils.h"
#include <cmath>
#include <iostream>

int reverseInteger(int number) {
    int reversed = 0;
    while (number != 0) {
        reversed *= 10;
        reversed += number % 10;    
        number = (int) (number / 10);
    }
    return reversed;
}

bool isPalindrome(int number) {
    if (reverseInteger(number) == number) {
        return true;
    }
    return false;
}

int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number = (int) (number / 10);
    }
    return sum;
}

int getNumberOfDigits(int number) {
    int digits = 0;
    while (number != 0) {
        digits += 1;
        number = (int) (number / 10);
    }
    return digits;
}

bool isArmstrong(int number) {
    int original = number;
    int digits = getNumberOfDigits(number);
    int sum = 0;
    while (number != 0) {
        sum += pow(number % 10, digits);
        number = (int) (number / 10);
    }
    if (sum == original) {
        return true;
    }
    return false;
}

bool isPerfect(int number) {
    int sum = 0;
    for (int i = 1; i < (number / 2 + 1); i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    if (sum == number) {
        return true;
    }
    return false;
}