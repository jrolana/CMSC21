/*
This program demonstrates the different ways we can initialize an array.
6a-6b are written by Jhoanna Olana.
*/
#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ( (int) (sizeof(pathway)) / (sizeof(pathway[0])) )

int main(void) {

    // ----- Original -----
    bool pathway[8] = {true, false, true, false, false, false, false};

    // ----- 6.a -----
    /*
    Uses designated initializers. The rest will automatically be given a value of false.
    */

    // bool pathway[8] = {[0] = true, [2] = true};

    // ----- 6.b -----
    /*
    Since the array consists of true values only on its first three elements, we can initialize it by providing 
    the values of those elements. The rest will be automatically assigned the value false.
    */

    // bool pathway[8] = {true, false, true, };

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