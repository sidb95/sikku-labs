/*
isPrime.h
sidb95
bhatoresiddharth@gmail.com
04 August 2024
*/

#include <iostream>
#include <math.h>
#include <unordered_map>

using namespace std;

unordered_map <int, bool> S;

bool isPrime(int n) {
    bool retPropn = true;
    if (n == 1) {
        retPropn = false;
    }
    else if (n == 2) {
        retPropn = true;
    }
    else if ((n % 2) == 0) {
        retPropn = false;
    }
    else {
        int num1 = pow(n, 0.5);
        for (int i = 3; i <= num1; i += 2) {
            if (S.find(i) == S.end()) {
                if ((n % i) == 0) {
                    retPropn = false;
                    break;
                }
                int j = 2 * i;
                while (j <= num1) {
                    S[j] = true;
                    j += i;
                }
            }
        }
    }
    return retPropn;
}
