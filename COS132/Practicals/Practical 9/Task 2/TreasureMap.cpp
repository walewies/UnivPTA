#include "TreasureMap.h"
#include <iostream>
using namespace std;

bool findTreasure(char map[ROWS][COLS], int jumps[], int jumpsLength, char *result) {
    int indexResults = 0;
    int rowIndex;
    int columnIndex;
    char currentPosition;
    for (int i = 0; i < jumpsLength; i++) {
        int jump = jumps[i];
        rowIndex = (jump / COLS) % ROWS;
        columnIndex = jump % COLS;
        currentPosition = map[rowIndex][columnIndex];

        if (currentPosition == 'X') {
            *(result + indexResults) = '\0';
            return true;
        } else if (currentPosition != '-') {
            *(result + indexResults) = currentPosition;
            indexResults++;
        }
    }
    *(result + indexResults) = '\0';
    return false;
}