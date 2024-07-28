/*
binary_search.h
sidb95 
bhatoresiddharth@gmail.com 
28 July 2024
*/

bool binarySearch(vector <int>& nums, int n, int k);

bool binarySearch(vector <int>& nums, int n, int k) {
    int i = 0;
    int j = n - 1;
    bool propn1 = false;
    while (i <= j) {
        int mid = i + (j - i) / 2;
        if (nums[mid] < k) {
            i = mid + 1;
        }
        else if (nums[mid] == k) {
            propn1 = true;
            break;
        }
        else {
            j = mid - 1;
        }
    }
    return propn1;
}
