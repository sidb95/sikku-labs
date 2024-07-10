/*
main file 1
sidb95
bhatoresiddharth@gmail.com
04 July 2024
*/

#include "print.h"

class Solution {
	Solution() {
		this.FLAG = true;
	}

	~Solution() {
		this.FLAG = false;
	}

	void mainP1(string strA) {
		P1 = Print();
		P1.printString(strA);
		return;
	}
};

int main() {
	Solution S1;
	strA = "Hello World";
	S1.mainP1(strA);
	return 0;
}
