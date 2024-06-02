#include "BombDefusing.h"

int calculateSize(int* arr) {
    int size = 0;
    while (*arr != -1) {
        size++;
        arr++;
    }
    return size;
}

void findPairs(int* arr, int size) {
    bool* paired = new bool[size];
    for (int i = 0; i < size; i++) {
        *(paired + i) = false;
    }
    std::cout << "Starting wire comparison...\n";
    for (int i = 0; i < size; i++) {
        bool foundPair = false;
        for (int j = i+1; j < size; j++) {
            if (*(arr + i) == *(arr + j) && *(paired + i) == false && *(paired + j) == false && foundPair == false) {
                paired[i] = true;
                paired[j] = true;
                std::cout << "Match found: Wire " << i + 1 << " and Wire " << j + 1 << " (Value: " << *(arr + i) << ") are a pair.\n";
                foundPair = true;
            }
        }
        if (foundPair == false && paired[i] == false) {
            std::cout << "No match found for Wire " << i + 1 << " (Value: " << *(arr + i) << "). Cut this wire to defuse the bomb!\n";
        }
    }
}
