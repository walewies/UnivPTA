#include "DatabaseSearch.h"

int searchDirectory() {
    int maxInt = 2147483647;
    double factorial = 1;
    int i;

    for (i = 1;  factorial <= (maxInt / i); i++) {
        factorial *= i;
    }
    cout << "Highest factorial without overflow is: " << (i - 1) << "! = " << factorial << endl;
    return findDatabaseFile(i);
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    } else if (num < 4 && num > 1) {
        return true;
    }
    for (int i = 2; i < (num - 1); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int findDatabaseFile(int maxNum) {
    for (int i = 1; i <= maxNum; i++) {
        if (isPrime(i)) {
            cout << i << " is a prime number.\n";
        } else {
            int temp = verifyDatabasePath(i);
            if (temp != 0) {
                return temp;
            }
        }
    }
    return 0;
}

int verifyDatabasePath(int dbIndex) {
    if (dbIndex == 12) {
        cout << "Verifying database path...C://home//CEO_Code//DB\n";
        return 80;
    } else {
        cout << "Verifying database path...Incorrect index\n";
        return 0;
    }
}