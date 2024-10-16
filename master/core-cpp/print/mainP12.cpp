/*
Main File 12
sidb95
bhatoresiddharth@gmail.com 
11 July 2024
*/

#include "print.h"
#include <set>

class Solution {
public:
    FLAG = false;
    set <char> S = {'H', 'E', 'L', 'L', 'O', ' ', 'W', 'O', 'R', 'L', 'D', '\n'};

    Solution() {
        FLAG = true;
    }

    ~Solution() {
        FLAG = false;
    }

    void mainP12 {
        Print P1;
        set <int>::iterator itr;
        for (itr = S.begin(); itr != S.end(); itr++) {
            P1.printString(*itr);
        }
        return;
    }
};
