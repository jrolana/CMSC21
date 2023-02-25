// Prints integers and floats to show how the two data types mentioned differ from each other.

#include <stdio.h>

// Function main begins program execution.
int main(void) {
    int i, j; // Declares integer variables.
    float x, y; // Declares float variables.

    // Gives values to the declared variables. Suffix "f" specifies that the value is a float.
    i = 10;
    j = 20;
    x = 43.2892f; 
    y = 5527.0f;

    // Prints the characters in the string and the values of the declared variables using conversion specifier.
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
} // End function main.