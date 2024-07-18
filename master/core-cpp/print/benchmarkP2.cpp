/*
benchmarkP2.cpp
sidb95
bhatoresiddharth@gmail.com
17, 18 July 2024
*/

#include <iostream>
#include <chrono>

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

class Solution {
public:
    void mainP3Aux(string strA, int n, int i) {
        Print P1;
        if (i == n) {
            return;
        }
        P1.printCharacter(strA[i]);
        return;
    }

    void mainP3(string strA) {
        int size1 = strA.size();
        mainP3Aux(strA, size1, 0);
        return;
    }
};


using namespace std;

string s = "";

int main() {
    Solution S1;
    auto start = chrono::high_resolution_clock::now();
    S1.mainP1(s);
    auto end = chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<chrono::seconds>(end - start);
    cout << duration.count() << endl;
    return 0;
}
