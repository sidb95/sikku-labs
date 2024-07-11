#include <iostream>

using namespace std;

class Numbers {
public:
    FLAG = false;

    Numbers() {
        FLAG = true;
    }

    ~Numbers() {
        FLAG = false;
    }

    int sumTwoNums(int a, int b) {
        return (a + b)
    }
};
