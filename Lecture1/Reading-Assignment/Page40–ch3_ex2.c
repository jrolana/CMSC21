// Print integers and floats in a variety of formats using conversion specifiers.

#include <stdio.h> // Gives the program the ability to perform input and output.

// Function main begins program execution.
int main(void) {
    int i; // Declares integer variable.
    float x; // Declares float variable.

    // Gives values to the declared variables. Suffix "f" specifies that the value is a float.
    i = 40;
    x = 839.21f;

    // Prints integers in various formats. It follows the format "%(-)m.pd" where (-) causes left justification, 
    // m specifies the  minimum number of characters to display while p specfies the minimum number of digits to display.
    // Extra zeros are added to the beginning of the number if necessary.
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

    // Prints floats in various formats. It follows the format "%(-)m.pX" where (-) causes left justification, 
    // m specifies the minimum number of characters to display, p specfies the minimum number of digits to appear
    // after the decimal point, and X acts as a placeholder for "f" (fixed decimal) or "e" (exponential form). 
    // If X is g (can either be in fixed decimal or exponential format), p indicates the maximum
    // number of significant digits to be displayed. 
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    // Signals program has implemented successfully.
    return 0;
} // End function main.