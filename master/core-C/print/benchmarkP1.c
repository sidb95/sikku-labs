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

void printCharacter(char c) {
    printf("%c", c);
    return;
}

int lengthString(char* s) {
    int size1 = 0;
    while (s[size1] != '\0') {
        size1 += 1;
    }
    return size1;
}

void printStringRecursive(char* s, int n, int i) {
    if (i == n) {
        printf("\n");
        return;
    }
    else {
        printCharacter(s[i]);
        printStringRecursive(s, n, i + 1);
        return;
    }
}


int main() {
    clock_t t; 
    t = clock();
    int n = lengthString(s);
    printStringRecursive(s, n, 0);
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
    printf("%f", time_taken);
    return 0;
}
