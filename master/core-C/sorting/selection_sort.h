/*
selection_sort.h
sidb95
bhatoresiddharth@gmail.com 
14 July 2024
*/

int* selectionSort(int* nums, int n) {
    int ptr, itr;
    while (ptr >= 0) {
        ptr = n - 1;
        for (int i = 0; i < ptr; i += 1) {
            if (nums[i] > nums[ptr]) {
                int TEMP = nums[i];
                nums[i] = nums[ptr];
                nums[ptr] = TEMP;
            }
        }
        ptr += 1;
    }
    return nums;
}
