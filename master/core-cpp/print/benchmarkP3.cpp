/*
benchmarkP3.cpp
sidb95
bhatoresiddharth@gmail.com 
18 July 2024
*/

#include <iostream>
#include <chrono>
#include <string>

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
    void mainP3(string strA) {
        Print P1;
        int size1 = strA.size();
        for (int i = 0; i < size1; i += 1) {
            P1.printCharacter(strA[i]);
        }
        P1.printCharacter('\n');
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
