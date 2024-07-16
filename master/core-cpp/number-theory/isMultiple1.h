/*
isMultiple1.h
sidb95
bhatoresiddharth@gmail.com
11 July 2024
*/

class Solution {
public:
    bool isMultiple(int a, int b) {
        if (a < b) {
            int TEMP = a;
            a = b;
            b = TEMP;
        }
        return (a % b == 0);
    }
};
