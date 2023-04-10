/*
This program displays a one-month calendar based on the user's selection of the number of days and the day 
of the week when the month begins.
Written in 2023 by Jhoanna Olana.
*/
#include <stdio.h>

#define SIZE 42

int main(void) {
    // ----- Initialization -----
    /*
    A one-month calendar can be viewed as a table, with a maximum dimension of 6x7, thus we can use an array to 
    create it. Since we only want a placeholder for the empty cells(containing "0" day) and cells that contain 
    month days, we use an 1d array with a size of 42.
    */

    int monthDay, startDay, count, i, j;
    int month[SIZE] = {0};                        

    // ----- Reads inputs -----
    /*
    Do while validates the data that users entered.
    */

    do {
        printf("Enter number of days in a month: ");
        scanf("%d", &monthDay);
    } while (monthDay < 28 || monthDay > 31);
    
    do {
        printf("Enter the starting day of the week (1 = Sun, 7 = Sat): ");
        scanf("%d", &startDay);
    } while (startDay < 1 || startDay > 7);
    

    // ----- Generates the one-month calendar -----
    /*
    Starting from the (startDay - 1) index (j), every element in the array will be replaced with 1 to monthdays (i).
    */

    j = startDay - 1;
    for (i = 1; i <= monthDay; i++) {
        month[j] = i;
        j++;
    }

    // ----- Prints the one-month calendar -----

    printf("\n%3c%3c%3c%3c%3c%3c%3c\n", 'S', 'M', 'T', 'W', 'T', 'F', 'S');

    /*
    To have a uniform look, every element in the array (excpet 0) will be printed with a minimum size of 3 characters (%3d) 
    -- 0 is replaced with 3 spaces. Count variable ensures that there are only 7 days printed in every row/week (including "0").
    */

    count = 0;
    for (i = 0; i < SIZE; i++) {

        if (month[i] == 0) {
            printf("   ");
        } else {
            printf("%3d", month[i]);
        }
        count++;              

        if (count == 7) {      
            printf("\n");
            count = 0;
        }
 
    }

    return 0;
}