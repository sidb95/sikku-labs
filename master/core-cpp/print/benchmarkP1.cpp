/*
benchmarkP1.cpp
sidb95
bhatoresiddharth@gmail.com
17, 18 July 2024
0
0
*/

#include <iostream>
#include <chrono>
#include <string>

using namespace std;

class Print {
public:
    void printString(string strA) {
        cout << strA << endl;
        return;
    }
};

class Solution {
public:
    void mainP1(string strA) {
        Print P1;
        P1.printString(strA);
        return;
    }
};

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
