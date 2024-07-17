/*
Main File Print 3
sidb95
bhatoresiddharth@gmail.com 
05, 10 July 2024
*/

#include "print.h"

class Solution {
public:
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
