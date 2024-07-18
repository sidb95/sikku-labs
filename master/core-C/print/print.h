/*
print.h
sidb95 
bhatoresiddharth@gmail.com 
15 July 2024
*/

#include <stdio.h>

void printString(char* s);
void printCharacter(char c);
void printStringRecursive(char* s, int n, int i);

void printString(char* s) {
    int size1 = 0, i;
    while (s[size1] != '\0') {
        size1 += 1;
    }
    for (i = 0; i < size1; i += 1) {
        printCharacter(s[i]);
    }
    printf('\n');
    return;
}

void printStringRecursive(char* s, int n, int i) {
    if (i == n) {
        printf("\n");
    }
    else {
        printCharacter(s[i]);
        printStringRecursive(s, n, i + 1);
        return;
    }
}

void printCharacter(char c) {
    printf("%c", c);
    return;
}
