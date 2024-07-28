/*
searchArray.h
sidb95 
bhatoresiddharth@gmail.com 
28 July 2024
*/

bool searchArray(vector <int>& nums, int n, int k);

bool searchArray(vector <int>& nums, int n, int k) {
    bool propn1 = false;
    for (int i = 0; i < n; i += 1) {
        if (nums[i] == k) {
            propn1 = true;
            break;
        }
    }
    return propn1;
}
