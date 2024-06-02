#include "MessageDecoder.h"

const char base64[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 
        'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 
        'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
        '+', '/'};

int findIndex(char c) {
    for (int i = 0; i < 64; i++) {
        if (base64[i] == c) {
            return i;
        }
    }
    return -1;
}

void decodeBase64(const char encoded[], char decoded[], int encodedLength) {
    int idx0;
    int idx1;
    int idx2;
    int idx3;

    int i = 0;
    int index = 0;
    while (i < encodedLength) {
        idx0 = findIndex(encoded[i]);
        idx1 = findIndex(encoded[i + 1]);
        idx2 = findIndex(encoded[i + 2]);
        idx3 = findIndex(encoded[i + 3]);
        decoded[index] = (idx0 * 4) + (idx1 / 16);
        decoded[index + 1] = ((idx1 % 16) * 16) + (idx2 / 4);
        decoded[index + 2] = ((idx2 % 4) * 64) + idx3;

        i += 4;
        index += 3;
    }
    decoded[index] = '\0';
}
