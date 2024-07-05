/*
print.h
sidb95
bhatoresiddharth@gmail.com
SKYKS
04 July 2024
*/

#include <iostream>

using namespace std;

class Print {
public:
	Print() {
		this.FLAG = true;
	}

	Print() {
		this.FLAG = false;
	}

	void printString(string strA) {
		std::cout << strA << endl;
	}
};
