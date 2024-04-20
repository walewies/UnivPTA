#include "DigitBasedPasswordCracker.h"
#include "Printer.h"

int crackPassswordPerDigit(int password, int numDigits){
    return crackDigit(password, 0, numDigits, 0);
}

// Modified processDigitGuess function
int processDigitGuess(int password, int guessedDigit, int numDigitsLeftToGuess, int currentPasswordGuess) {
    // Get the value of diregarding all digits behind the digit in need of isolation
    int tempValue = ((password - (password % (int) pow(10, numDigitsLeftToGuess-1))) / (int) pow(10, numDigitsLeftToGuess-1));
    
    // Get the value of all the digits that are unneeded and need to be subtracted
    int disregard = ((password - (password % (int) pow(10, numDigitsLeftToGuess))) / (int) pow(10, numDigitsLeftToGuess)) * 10;
    
    int extractedDigit = tempValue - disregard;
    int result = (guessedDigit == extractedDigit) ? 
    crackDigit(password, 0, numDigitsLeftToGuess - 1, currentPasswordGuess + (extractedDigit * pow(10, numDigitsLeftToGuess - 1))) :
    crackDigit(password, guessedDigit + 1, numDigitsLeftToGuess, currentPasswordGuess);

    return result;
}


// Modified crackDigit function to use processDigitGuess
int crackDigit(int password, int guessedDigit, int numDigitsLeftToGuess, int currentPasswordGuess) {
    printCurrentGuess(password, guessedDigit, numDigitsLeftToGuess, currentPasswordGuess);
    int result = (numDigitsLeftToGuess == 0) ?
    guessedDigit :
    processDigitGuess(password, guessedDigit, numDigitsLeftToGuess, currentPasswordGuess);
    return result;
}