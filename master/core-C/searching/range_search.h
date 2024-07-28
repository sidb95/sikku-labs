/*
range_search.h
sidb95 
bhatoresiddharth@gmail.com 
28 July 2024
*/

#include <stdlib.h>

int range_search(int* nums, int n, int k) {
    int p = 0;
    int q = 0;
    int num1 = 0;
    while ((num1 + q) < k) {
        p += 1;
        q = pow(2, p - 1);
        if ((num1 + q) > k) {
            num1 += (q / 2)
            p = 0;
            q = 0;
        }
    }
    if ((num1 + q) == k) {
        return true;
    }
    else {
        return false;
    }
}
