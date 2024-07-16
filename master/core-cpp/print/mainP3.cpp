/*
Main File Print 3
sidb95
bhatoresiddharth@gmail.com 
05, 10 July 2024
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

	void mainP3Aux(string strA, int n, int i) {
		Print P1;
		if (i == n) {
			return;
		}
		P1.printStr(strA[i]);
		return;
	}

	void mainP3(string strA) {
		int size1 = strA.size();
		mainP3Aux(strA, size1, 0);
		return;
	}
};

int main() {
	Solution S1;
	string str1 = "Hello World";
	S1.mainP3(str1);
	return 0;
}
