#include "PoisonDilute.h"
#include <iostream>
using namespace std;

void findSmallest(int &min, int &minIndex, const int *baseArray, const int end, int start) {
    for (int j = start; j < end; j++) {
        if (baseArray[j] < min) {
            minIndex = j;
            min = baseArray[j];
        }
    }
}

void swap(int index1, int index2, int *baseArray) {
    int temp = baseArray[index1];
    baseArray[index1] = baseArray[index2];
    baseArray[index2] = temp;
}

int* findNthLargest(int *arr, int size, int n, int *largest) {

    // Checks edge case for when the size of the initial array is less
    // than that of the target size(n)
    if (size < n) {
        int* tempLargest = new int[size];
        n = size;
        delete [] largest;
        largest = tempLargest;
    }

    // finds the largest and subs it with 0
    int largestIndex = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[j] > arr[largestIndex]) {
                largestIndex = j;
            }    
        }
        largest[i] = arr[largestIndex];
        arr[largestIndex] = 0;
    }
    
    // Keeps looping through the list finds the smallest And then swaps with the
    // first unsorted index.
    int min;
    int minIndex;
    for (int firstUnsortedIndex = 0; firstUnsortedIndex < n - 1; firstUnsortedIndex++) {
        min = largest[firstUnsortedIndex];
        findSmallest(min, minIndex, largest, n, firstUnsortedIndex);

        if (min != largest[firstUnsortedIndex]) {
            swap(firstUnsortedIndex, minIndex, largest);
        }
    }
    
    return largest;
}