/*
This program prints 2^0 to 2^7 using a for loop.
Written in 2023 by Jhoanna Olana.
*/
#include <stdio.h>

int main(void) {
    int i;

    /*
    Prints numbers 1(2^0) to 128(2^7). In every iteration, the value of i is updated by multiplying its old value 
    by 2. Unlike in item 1, the initialize and update portions of the loop are all in the same line.
    */
   
    for (i = 1; i <= 128; i *= 2) {
        printf("%d ", i);
    }

    return 0;
}