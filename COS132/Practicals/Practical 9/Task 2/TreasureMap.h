#ifndef TREASURE_MAP_H
#define TREASURE_MAP_H
const int ROWS = 4;
const int COLS = 5;
bool findTreasure(char map[ROWS][COLS], int jumps[], int jumpsLength, char *result);
#endif