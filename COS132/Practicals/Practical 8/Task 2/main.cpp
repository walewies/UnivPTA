#include "RoomLocater.h"
#include "BombDefusing.h"
#include <cassert>
#include <iostream>

using namespace std;

int main()
{
    string base = "Hello";
    string to_find = "ell";
    char* ptr1 = &base[0];
    char* ptr2 = &to_find[0];
    cout << substringSearch(ptr1, ptr2);
    indexToChar(63);
    int arr[5] = {1, 2, 1, 1, -1};
    std::cout << "start" << std::endl;
    int* start = &arr[0];
    std::cout << start << std::endl;
    std::cout << calculateSize(arr) << std::endl;
    findPairs(start, calculateSize(start));
    return 0;
}
