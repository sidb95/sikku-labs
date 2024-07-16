/*
print.h
sidb95 
bhatoresiddharth@gmail.com 
15 July 2024
*/

#include <stdio.h>

void printString(char* s);

void printString(char* s) {
    int size1 = 0, i;
    while (s[size1] != '\0') {
        size1 += 1;
    }
    for (i = 0; i < size1; i += 1) {
        printf("%c", s[i]);
    }
    printf('\n');
    return;
}
