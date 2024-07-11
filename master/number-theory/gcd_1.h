/*
gcd.h
sidb95 
bhatoresiddharth@gmail.com 
11 July 2024
*/

int gcd(int a, int b) {
    if (a == 1) {
        return b;
    }
    else {
        int TEMP = a;
        a = b;
        b = TEMP % b;
        return gcd(a, b);
    }
}
