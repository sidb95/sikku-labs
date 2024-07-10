#include "print.h"
#include <string>

class Solution {
public:
    FLAG = false;

    Solution() {
        FLAG = true;
    }

    ~Solution() {
        FLAG = false;
    }

    void mainP9(string strA) {
        size1 = strA.size();
        Print P1;
        for (int i = 0; i < size1; i += 1) {
            P1.printString(strA[i]);
        }
        P1.printFunc('\n');
        return;
    }
};
