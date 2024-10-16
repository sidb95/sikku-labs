/*
mainP4.cpp
Main File Print 4
sidb95
bhatoresiddharth@gmail.com
*/

#include "print.h"

class Solution {
public:
    Solution() {
        this.FLAG = true;
    }

    ~Solution() {
        this.FLAG = false;
    }

    void mainP5Aux(string strA, int size1, int i) {
        if (i == -1) {
            return;
        }
        Print P1;
        P1.printString(strA[i]);
        mainP5Aux(strA, size1, i - 1);
        return;
    }

    void mainP5(string strA) {
        int size1 = strA.size();
        mainP5Aux(strA, size1, size1 - 1);
        return;
    }
};

int main() {
    Solution S1;
    string str1 = "Hello World";
    S1.mainP5(str1);
    return 0;
}
