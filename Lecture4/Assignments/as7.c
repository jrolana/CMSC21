/*
This program performs the 7th task listed in this document:
https://upsystem-my.sharepoint.com/:b:/g/personal/jrolana_outlook_up_edu_ph/Ecnoqciqhi1Bo40WHZvnzFABLmO4AA9MvgOqdf_JcYpHlw?e=5OSq7j
Written in 2023 by Jhoanna Olana.
*/
#include <stdio.h>

#define NUM_POINTS 9 

int main(void) {
    // ----- Intialization -----
    /*
    Adjacency matrix of the given graph (node/point i included).
    */
    int road_networks[NUM_POINTS][NUM_POINTS] = {
        {1, 1, 0, 0, 0, 1, 0, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 1, 1},
    };

    char points[NUM_POINTS] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
    
    int r, c, point;

    // ----- Displays the matrix -----

    // Column Header
    /*
    Every element in the array named points will be printed as the column header of the adjacency matrix.
    Charging stations c and d are enclosed in brackets.
    */
    printf("\t");
    for (r = 0; r < NUM_POINTS; r++) {
        if (points[r] == 'c' || points[r] == 'd') {
            printf("[%c]\t", points[r]);
        } else {
            printf("%c\t", points[r]);
        }
    }
    printf("\n");

    // Row
    /*
    Every row in the adjacency matrix consists of the points (act as the headers for the rows) 
    and the edges for each point (or the elements in every row of the array named road_networks).
    */
    for (r = 0; r < NUM_POINTS; r++) {
        // Row Header
        if (points[r] == 'c' || points[r] == 'd') {
            printf("[%c]\t", points[r]);
        } else {
            printf("%c\t", points[r]);
        }

        // Elements in each row
        for (c = 0; c < NUM_POINTS; c++) {
            printf("%d\t", road_networks[r][c]);
        }

        printf("\n");
    }
    printf("\n");

    // ----- Determines the nearest charging station given a point. -----
    /*
    Do while ensures that users enter a known point only. Nested if-else statements give the 
    appropriate charging station for each point based on how it was constructed in the graph.
    */
    do {
        printf("Which point are you located? (0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H, 8- I): ");
        scanf("%d", &point);
    } while (point < 0 || point > 8);

    printf("At point: ");

    if (point == 0 || point == 1 || point == 5) {

        if (point == 0) {
            printf("A\n");
        } else if (point == 1) {
            printf("B\n");
        } else {
            printf("F\n");
        }

        printf("point: C arrived to charging station.\n");
    } 
    else if (point == 2) {
        printf("C\npoint: C is a charging station.\n");
    } 
    else if (point == 3) {
        printf("D\npoint: D is a charging station.\n");
    }
    else if (point == 6 || point == 4) {

        if (point == 6) {
            printf("G\n");
        } else {
            printf("E\n");
        }

        printf("point: D arrived to charging station.\n");
    }
    else {

        if (point == 7) {
            printf("H\n");
        } else {
            printf("I\n");
        }

        printf("point: No charging station found.\n");
    }
    
    return 0;
}