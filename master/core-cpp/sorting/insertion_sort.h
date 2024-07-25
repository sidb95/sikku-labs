/*
insertion_sort.h
sidb95
bhatoresiddharth@gmail.com
26 July 2024
*/

class Solution {
public:
    vector <int> insertionSort(vector <int>& V1, int n) {
        if (n == 0) {
            return V1;
        }
        vector <int> nums;
        nums.push_back(V1[0]);
        int i = 1;
        while (i != n) {
            nums.push_back(V1[i]);
            int j = i;
            while (j >= 1 && nums[j] < nums[j - 1]) {
                int TEMP = nums[j - 1];
                nums[j - 1] = nums[j];
                nums[j] = TEMP;
            }            
        }
        return nums;
    }
};
