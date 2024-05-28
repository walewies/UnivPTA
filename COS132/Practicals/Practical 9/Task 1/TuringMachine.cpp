#include "TuringMachine.h"

void initializeMachine(char tape[], int& head, const string& currentState, int tapeSize) {
    int i = 0;
    bool headFound = false;
    while (headFound == false && i < tapeSize) {
        if (tape[i] != '_') {
            head = i;
            headFound = true;
        } else {
            i++;
        }
    }
}

bool matchRule(const string& currentState, const char& currentSymbol, string rules[][5], int numRules, string& newState, char& newSymbol, string& move) {
    for (int i = 0; i < numRules; i++) {
        if (rules[i][0] == currentState && rules[i][1][0] == currentSymbol) {
            newState = rules[i][2];
            newSymbol = rules[i][3][0];
            move = rules[i][4];
            return true;         
        }
    }
    return false;
}

void applyRule(char tape[], int& head, const string& newState, string& currentState, const char& newSymbol, const string& move, int tapeSize) {
    tape[head] = newSymbol;
    if (move == "L" && head > 0) {
        head--;
    } else if (move == "R" && head < tapeSize - 1) {
        head++;
    }
    currentState = newState;
}

bool checkFinalState(const string& currentState) {
    if (currentState == "accept" || currentState == "reject") {
        return true;
    }
    return false;
}

void printOutput(const char tape[], const string& currentState, int tapeSize) {
    cout << "Final tape: ";
    for (int i = 0; i < tapeSize; i++) {
        cout << tape[i];
    }
    cout << endl;
    cout << "Machine ended in state: " << currentState << endl;
}

void simulateTuringMachine(char tape[], string rules[][5], int numRules, int tapeSize) {
    int head;
    string currentState = "start";
        
    initializeMachine(tape, head, currentState, tapeSize);
    char newSymbol;
    string newState;
    string move;

    while (!checkFinalState(currentState) && matchRule(currentState, tape[head], rules, numRules, newState, newSymbol, move)) {
        applyRule(tape, head, newState, currentState, newSymbol, move, tapeSize);   
    }
    printOutput(tape, currentState, tapeSize);
}