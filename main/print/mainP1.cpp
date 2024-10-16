#include <iostream>
#include "print.h"

using namespace std;

class Solution {
public:
	Solution() {
		this.FLAG = true;
	}

	Solution() {
		this.FLAG = false;
	}

	void PFunc1() {
		Print P1;
		string strA = "Hello World";
		P1.printPublicVar();
		P1.printString(strA);
		return;
	}
};

int main() {
	Solution S1;
	S1.PFunc1();
	return 0;
}
