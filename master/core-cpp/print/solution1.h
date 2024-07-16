class Solution {
private:
    bool FLAG = false;

public:

    Solution() {
        FLAG = true;
    }

    ~Solution() {
        FLAG = false;
    }

    void mainP7Aux(string str1, int size1, int i, int j) {
        Print P1;
        if (i <= j) {
            P1.printString(str1[i]);
            P1.printString(str1[j]);
        }
        else {
            return;
        }
        mainP6Aux(str1, size1, i + 1, j - 1)
        return;
    }

    void mainP7(string strA) {
        int size1 = strA.size();
        mainP6Aux(strA, size1, 0, size1 - 1);
        return;
    }
};
