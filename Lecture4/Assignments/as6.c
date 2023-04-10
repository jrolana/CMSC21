/*
This program demonstrates the different ways we can initialize an array.
6a-6b are written by Jhoanna Olana.
*/
#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ( (int) (sizeof(pathway)) / (sizeof(pathway[0])) )

int main(void) {

    // ----- Original -----
    // bool pathway[8] = {true, false, true, false, false, false, false};

    // ----- 6.a -----
    /*
    Uses designated initializers.
    Since the array is of boolean type, its elements can be written as 0(false) or 1(true).
    */

    // bool pathway[8] = {[0] = 1, [2] = 1};

    // ----- 6.b -----
    /*
    Because it has the value 0 from the fourth to the last element, we can initialize it by providing the 
    first three elements only. The rest will be automatically assigned the value false.
    */

    bool pathway[8] = {1, 0, 1};

    // ------ Displays the status of each pathway/elements in the array ------
    
    for (int i = 0; i < NUM_PATHWAYS; i++) {
        if (pathway[i]) {
            printf("pathway[%d] is open \n", i);
        } else {
            printf("pathway[%d] is close \n", i);
        }
    }

    return 0;
}