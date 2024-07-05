#include "print.h"

class Solution {
private:
    FLAG = false;
    string str1 = "Hello World";
public:
    Solution() {
        FLAG = true;
    }

    ~Solution() {
        FLAG = false;
    }

    void mainP8(string strA) {
        Print P1;
        P1.printString(str1);
        return;
    }
};

int main() {
    Solution S1;
    S1.mainP8();
    return 0;
}
