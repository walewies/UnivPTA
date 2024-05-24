#include "task1.h"

void sortNumbers(int &a, int &b, int &c) {
    int tempA = a;
    int tempB = b;
    int tempC = c;

    if (a > b) {
        if (a > c) {
            tempA = a;
            if (b > c) {
                tempB = b;
                tempC = c;
            } else {
                tempB = c;
                tempC = b;
            }
        } else {
            tempA = c;
            tempB = a;
            tempC = b;
        }
    } else {
        if (b > c) {
            tempA = b;
            if (a > c) {
                tempB = a;
                tempC = c;
            } else {
                tempB = c;
                tempC = a;
            }
        } else {
            tempA = c;
            tempB = b;
            tempC = a;
        }
    }

    a = tempA;
    b = tempB;
    c = tempC;
}

void swap(int** ptrA, int** ptrB) {
    int* temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}