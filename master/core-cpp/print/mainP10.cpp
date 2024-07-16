/*
Main File Print 10
sidb95
bhatoresiddharth@gmail.com 
10 July 2024
*/

#include "print.h"
#include <string>
#include <set>

class Solution {
public:
    FLAG = false;

    Solution() {
        FLAG = true;
    }

    ~Solution() {
        FLAG = false;
    }

    void printStringAux(set <string>& S) {
        Print P1;
        set <string>::iterator i;
        for (i = S.begin(); i != S.end(); i++) {
            P1.printString(*i);
            P1.printString(' ');
        }
        return;
    }

    void printString(string strA) {
        size1 = strA.size();
        set <string> S1;
        int itr = 0;
        while (itr != size1) {
            string str1 = "";
            while (strA[itr] != ' ') {
                str1 += strA[i];
            }
            S1.insert(str1);
            itr += 1;
        }
        printStringAux(S1);
        return
    }
};
