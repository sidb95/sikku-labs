/*
mainP5.cpp
Main File 5
sidb95
bhatoresiddharth@gmail.com
05 July 2024
*/

#include <math.h>
#include "print.h"

class Solution {
public:

    Solution() {
        this.FLAG = true;
    }

    ~Solution() {
        this.FLAG = false;
    }

    int mainP5Aux(string str1) {
        int size1 = str1.size();
        int answer = 0;
        for (int i = 0; i < size1; i += 1) {
            answer += str1[i] * pow(10, i);
        }
        return answer;
    }

    void mainP5(string strA) {
        int size1 = strA.size();
        retStr = "";
        Print P1;
        for (int i = 0; i < size1; i += 1) {
            string str1 = "";
            while (strA[i] >= '0' && strA[i] <= '9') {
                str1 += strA[i]
            }
            int no = mainP5Aux(str1);
            for (int j = 0; j < no - 1; j += 1) {
                retStr += strA[i];
            }
        }
        P1.printString(retStr);
    }
}

int main() {
    string str1 = "Hello World";
    string str2 = "Hel2o World";
    Solution S1;
    S1.mainP5(str2);
    return 0;
}
