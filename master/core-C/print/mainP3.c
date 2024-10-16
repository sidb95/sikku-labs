/*
Main File Print 3
sidb95
bhatoresiddharth@gmail.com 
22 July 2024
*/

#include <stdio.h>
#include <stdlib.h>

char filename[10] = "input_1.txt";

void mainP3(void) {
    FILE* fptr;
    fptr = fopen(filename, "r");
    //
    if (fptr == NULL) {
        printf("The file is not opened. The program will now exit.");
        exit(0);
    }
    else {
          
    }
    return;
}
