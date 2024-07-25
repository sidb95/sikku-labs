/*
isInteger.h
sidb95 
bhatoresiddharth@gmail.com 
25 July 2024
*/

#include <stdio.h>

bool isInteger(double n) {
    long long int num1 = n;
    double num2 = num1 - n;
    return (num2 < 0) ? (false) : (true);
}
