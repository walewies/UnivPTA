#include "RoomLocater.h"

int substringSearch(const char* str, const char* substr) {
    const char* ptr1 = str;
    const char* ptr2 = substr;

    int index = 0;

    int i = 0;
    while (*(ptr1 + i) != '\0') {
        int start = i;

        int j = 0;
        while (*(ptr2 + j) != '\0' && *(ptr2 + j) == *(ptr1 + i)) {
            i++;
            j++;
        }
        if (*(ptr2 + j) == '\0') {
            return index;
        }
        i = start + 1;
        index++;
    }
    return -1;
}

void indexToChar(int index) {
    char room = static_cast<char>(index);
    std::cout << "Floor: " << index << ", Room: " << room << std::endl;
}