// Determines if an inputted string is planet or not based on whether or not it is belonged to the list of planets.
// Limitation: Case-sensitive. Only considers a string planet when its 1st letter is capitilized.
#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char* argv[]) // command line arguments
/*
argc = number of words written in command line
* argv[] = holds an array containing strings (words) written in the command line
*/
{
    char* planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
    /*
    char* arr[] = an array that consists of pointers to strings
    */
    int i, j;

    for (i = 0; i < argc; i++) {
        /*
        Every word written in command line (argv[i]) is being compared to every strings in the array named planets.
        If argv[i] is the same with one of the strings in planets (case-sensitive), then it is considered a planet. 
        */
        for (j = 0; j < NUM_PLANETS; j++) {
            if (strcmp(argv[i], planets[j]) == 0) {
                printf("%s is a planet %d\n", argv[i], j + 1);
                break;
            }
        }
        /*
        Once argv[i] has been compared to all strings in planets and hasn't found it's match, then it is not
        considered a planet.
        */
        if (j == NUM_PLANETS) {
            printf("%s is not a planet.\n", argv[i]);
        }
    }

    return 0;
}