#include "DigitBasedPasswordCracker.h"


int crackPassswordPerDigit(int password, int numDigits){
    return crackDigit(password, guessedDigit = 0, numDigitsLeftToGuess = numDigits, currentPasswordGuess = 0)
}

// Modified processDigitGuess function
int processDigitGuess(int password, int guessedDigit, int numDigitsLeftToGuess, int currentPasswordGuess) {
    int extractedDigit;
    if (numDigitsLeftToGuess == 4) {
        
    }
}


// Modified crackDigit function to use processDigitGuess
int crackDigit(int password, int guessedDigit, int numDigitsLeftToGuess, int currentPasswordGuess) {
    printCurrentGuess(password, guessedDigit, numDigitsLeftToGuess, currentPasswordGuess);
    numDigitsLeftToGuess == 0 ? return guessedDigit : return processDigitGuess(password, guessedDigit, numDigitsLeftToGuess, currentPassswordGuess);
