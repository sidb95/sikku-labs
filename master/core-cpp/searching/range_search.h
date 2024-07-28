/*
range_search.h
sidb95 
bhatoresiddharth@gmail.com 
28 July 2024
*/

#include <vector>
#include <math.h>

bool rangeSearch(vector <int>& nums, int n, int k);

bool rangeSearch(vector <int>& nums, int n, int k) {
    int p = 0;
    int q = 0;
    int i = 0;
    int num1 = nums[i];
    while (((num1 + q) < n) && (nums[num1 + q] < k)) {
        p += 1;
        q = pow(2, p - 1);
        if (nums[num1 + q] < k) {
            num1 += (q / 2)
            q = 0;
            p = 0;
        }
    }
    if (nums[num1 + q] == k) {
        return true;
    }
    else {
        return false;
    }
}
