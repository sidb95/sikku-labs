/*
print.h
sidb95
bhatoresiddharth@gmail.com
04, 18 July 2024
*/

#include <iostream>

using namespace std;

class Print {
public:
    void printString(string strA) {
        cout << strA << endl;
        return;
    }

    void printCharacter(char c) {
        cout << c << endl;
        return;
    }

    int lengthString(string strA) {
        return strA.size();
    }
};
