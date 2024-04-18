#include "DigitBasedPasswordCracker.h"


int crackPassswordPerDigit(int password, int numDigits){
    // Implement here
}

// Modified processDigitGuess function
int processDigitGuess(int password, int guessedDigit, int numDigitsLeftToGuess, int currentPasswordGuess) {
    // Implement here
}


// Modified crackDigit function to use processDigitGuess
int crackDigit(int password, int guessedDigit, int numDigitsLeftToGuess, int currentPasswordGuess) {
    // Implement here
}
