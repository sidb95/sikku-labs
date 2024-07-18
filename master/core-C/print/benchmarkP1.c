/*
benchmarkP1.c
sidb95 
bhatoresiddharth@gmail.com 
18 July 2024
*/

#include <stdio.h>
#include <time.h>

void printString(char* s);

char* s;

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

int main() {
    printString(s);
    return 0;
}
