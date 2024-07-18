/*
benchmarkP3.cpp
sidb95
bhatoresiddharth@gmail.com 
18 July 2024
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

    void printCharacter(char c) {
        cout << c;
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
            cout << endl;
			return;
		}
		P1.printCharacter(strA[i]);
        mainP3Aux(strA, n, i + 1);  
		return;
	}

	void mainP3(string strA) {
		int size1 = strA.size();
		mainP3Aux(strA, size1, 0);
		return;
	}
};

string s = "";

int main() {
    Solution S1;
    auto start = chrono::high_resolution_clock::now();
    S1.mainP3(s);
    auto end = chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<chrono::microseconds>(end - start);
    cout << duration.count() << endl;
    return 0;
}
