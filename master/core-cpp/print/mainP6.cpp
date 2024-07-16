/*
Main File Print 6
sidb95
bhatoresiddharth@gmail.com
05 July 2024
*/

#include "print.h"
#include <string>

class Solution {
private:
    bool FLAG = false;

public:
    Solution() {
        FLAG = true;
    }

    ~Solution() {
        FLAG = false;
    }

    void mainP6Aux(string str1, int size1, int i, int j) {
        Print P1;
        if (i >= 0) {
            P1.printString(str1[i]);
        }
        if (j < size1) {
            P1.printString(str1[j]);
        }
        if (i < 0 || j >= size1) {
            return;
        }
        mainP6Aux(str1, size1, i - 1, j + 1);
        return;
    }

    void mainP6(string strA) {
        int size1 = strA.size();
        mainP6Aux(strA, size1, (size1 / 2) + 1, size1 / 2);
        return;
    }

};

int main() {
    string str1 = "DRW LEHLOOL"
    Solution S1;
    S1.mainP6(str1);
    return 0;
}
