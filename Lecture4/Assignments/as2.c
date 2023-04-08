/*
This program shows how a loop statement may be constructed using several loop controls as 
long as the portions such as initialize, condition, and update are the same.
Written in 2023 by Jhoanna Olana.
*/
#include <stdio.h>

int main(void) {
    int i = 0;                          // Initialize

    // ---- while loop ----
    // while (i < 10) {                 // Condition
    //     printf("%d ", i);            
    //     i++;                         // Update
    // }

    // ---- for loop ----
    // for ( ; i < 10; ) {              // Condition
    //     printf("%d ", i);
    //     i++;                         // Update
    // }

    // ---- do-while loop ----    
    // do {
    //     printf("%d ", i);
    //     i++;                         // Update
    // } while (i < 10);                // Condition

    return 0;
}