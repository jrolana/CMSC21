/*
This program computes the powers of two from 0 to n.
Written in 2023 by Jhoanna Olana.
*/
#include <stdio.h>
#include <math.h>

int main(void) {
    // ------ Initialization -----
    /*
    n(the last number for which 2 will be raised) and i(the iterator variable) are all declared as integers,
    while pow2(stores the powers of 2) is declared as double so that it can handle large numbers (such as > 2^30).
    */

    int n, i;
    double pow2;                         

    // ------ Reads inputs and displays headers -----
    printf("TABLE OF POWERS OF TWO\n");

    printf("\nEnter a number (n): ");
    scanf("%d", &n);

    printf("\nn\t2 to the n\n");
    printf("---\t---------------\n");
    
    // ------  Prints the powers of 2 from 0 to n -----
    /*
    Pow2 is first set to be 1, and in subsequent iterations, it is set to the result of multiplying its old value by 2.
    Since pow2 is a double, ".lf" or ".0lf" ensures that no decimal places are printed for each power.
    */

    for (i = 0; i <= n; i++) {
        if (i == 0) {
            pow2 = 1;
        } else {
            pow2 *= 2;
        }
        printf("%d\t%.lf\n", i, pow2);
    }

    return 0;
}