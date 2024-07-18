/*
benchmarkP1.c
sidb95 
bhatoresiddharth@gmail.com 
18 July 2024
*/

#include <stdio.h>
#include <time.h>

void printString(char* s);

char s[20000] = {'\0'};

void printString(char* s) {
    int size1 = 0, i;
    while (s[size1] != '\0') {
        size1 += 1;
    }
    for (i = 0; i < size1; i += 1) {
        printf("%c", s[i]);
    }
    printf("\n");
    return;
}

int main() {
    clock_t t; 
    t = clock();
    printString(s);
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
    printf("%f", time_taken);
    return 0;
}
