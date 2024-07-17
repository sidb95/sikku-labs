/*
print.h
sidb95
bhatoresiddharth@gmail.com
SKYKS
04 July 2024
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
        cout << c;
        return;
    }

    int lengthString(string strA) {
        return strA.size();
    }
};

