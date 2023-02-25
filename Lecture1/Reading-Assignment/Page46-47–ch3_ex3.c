// Adds two fractions.
#include <stdio.h>

// Function main begins program execution.
int main(void){
    // Declares the parts of two functions and the result of the summation of them as integers.
    int num1, denom1, num2, denom2, result_num, result_denom;
    
    printf("Enter first fraction: "); // Prompt for input.
    scanf("%d/%d", &num1, &denom1); // Reads first fraction from user.

    printf("Enter second fraction: "); // Prompt for input.
    scanf("%d/%d", &num2, &denom2); // Reads second fraction from user.

    result_num = num1 * denom2 + num2 * denom1; // Calculates the numerator of the sum of a two fractions.
    result_denom = denom1 * denom2; // Calculates the denominator of the sum of a two fractions.

    // Displays the sum of the fractions.
    printf("The sum is %d/%d\n", result_num, result_denom);

    // Signals program has implemented successfully.
    return 0;
} // End function main.