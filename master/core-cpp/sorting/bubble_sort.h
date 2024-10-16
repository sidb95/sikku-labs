/*
bubble_sort.h
sidb95
bhatoresiddharth@gmail.com
26 July 2024
*/

class Solution {
public:
    vector <int> bubbleSort(vector <int>& V1, int n) {
        bool FLAG = true;
        while (FLAG) {
            FLAG = false;
            for (int i = 0; i < n - 1; i += 1) {
                for (int j = i + 1; j < n; j += 1) {
                    if (V1[i] > V1[j]) {
                        int TEMP = V1[i];
                        V1[i] = V1[j];
                        V1[j] = TEMP;
                        FLAG = true;
                    }
                }
            }
        }
        return V1;
    }
};
