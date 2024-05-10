#include "loop.h"

void printCollatz(int num){
    cout << "Starting from " << num << "\n";
    while (true) {
        if (num == 1) {
            cout << num << "\n";
            break;
        } else {
            cout << num << "\n";
            if (num % 2 != 0) {
                num = 3 * num + 1;
            } else {
                num = num / 2;
            }
        }
    }
}

void printSquares(int n){
    for (int i = 1; i <= n; i++) {
        cout << "Square of " << i << " is " << i*i << "\n";
    }
}

void printDiamond(int halfSize){
    int amountSpaces;
    int amountStars = 1;

    // Top half
    for (int row = 0; row < halfSize; row++) {
        amountSpaces = halfSize - row - 1;
        for (int j = 0; j < amountSpaces; j++) {
            cout << " ";
        }
        for (int j = 0; j < amountStars; j++) {
            cout << "*";
        }
        amountStars += 2;
        cout << "\n";
    }

    amountStars -= 2;
    // Bottom half
    for (int row = halfSize; row < (2*halfSize)-1; row++) {
        amountSpaces = row - halfSize + 1;
        amountStars -= 2;
        for (int j = 0; j < amountSpaces; j++) {
            cout << " ";
        }
        for (int j = 0; j < amountStars; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}