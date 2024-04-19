#include "RangeBasedPasswordCracker.h"
#include "Printer.h"

int decideAndSearch(int guess, int password, int low, int high) {
    isLessThan(guess, password) ? 
    crackPassword(guess + 1, high, password) : 
    (isGreaterThan(guess, password) ? 
    crackPassword(low, guess - 1, password) : 
    password);
}


int crackPassword(int low, int high, int password) {
    int guess = (int) (low + high) / 2; // The midpoint between high and low floored.
    printGuess(midpoint);
    isEqual(password, guess) ? 
    foundPassword() : 
    decideAndSearch();    
}
