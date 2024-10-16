/*
searchArray.h
sidb95 
bhatoresiddharth@gmail.com 
28 July 2024
*/

bool searchArray(int* nums, int n, int k) {
    int i;
    bool propn1 = false;
    for (i = 0; i < n; i += 1) {
        if (nums[i] == k) {
            propn1 = true;
            break;
        }
    }
    return propn1;
}
