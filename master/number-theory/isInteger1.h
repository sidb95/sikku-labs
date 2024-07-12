/*
isInteger.h
sidb95
bhatoresiddharth@gmail.com
12 July 2024
*/
#include <string>

class Solution {
public:
    bool isInteger1(double a) {
        string b = to_string(a);
        bool propn1 = true;
        for (int i = 0; i < b.size(); i += 1) {
            if (b[i] == '.') {
                propn1 = false;
            }
        }
        return propn1;
        }
    }
};
