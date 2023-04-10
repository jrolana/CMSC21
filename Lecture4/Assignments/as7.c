/*
This program performs the 7th task listed in this document:
https://upsystem-my.sharepoint.com/:b:/g/personal/jrolana_outlook_up_edu_ph/Ecnoqciqhi1Bo40WHZvnzFABLmO4AA9MvgOqdf_JcYpHlw?e=5OSq7j
Written in 2023 by Jhoanna Olana.
*/
#include <stdio.h>
#include <stdbool.h>

#define NUM_POINTS 9                     // Size of the arrays
#define POINT_C 2                        // Index of charging station C    
#define POINT_D 3                        // Index of charging station D

int main(void) {
    // ----- Intialization -----
    /*
    Adjacency matrix of the given graph (node/point I included).
    */
    bool road_networks[NUM_POINTS][NUM_POINTS] = {
        [0][0] = 1, [0][1] = 1, [0][5] = 1,
        [1][0] = 1, [1][1] = 1, [1][2] = 1,
        [2][1] = 1, [2][2] = 1, [2][4] = 1, [2][5] = 1, [2][8] = 1,
        [3][3] = 1, [3][4] = 1, 
        [4][3] = 1, [4][4] = 1,
        [5][0] = 1, [5][2] = 1, [5][5] = 1, 
        [6][0] = 1, [6][3] = 1, [6][6] = 1, 
        [7][7] = 1, [7][8] = 1,
        [8][7] = 1, [8][8] = 1
    };

    char points[NUM_POINTS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};

    bool to_C[NUM_POINTS] = {0};
    bool to_D[NUM_POINTS] = {0};
    
    int r, c, k, point;

    // ----- Displays the matrix -----

    // Column Header
    /*
    Every element in the array named points will be printed as the column header of the adjacency matrix.
    Charging stations C and D are enclosed in brackets.
    */
    printf("\t");
    for (r = 0; r < NUM_POINTS; r++) {
        if (points[r] == 'C' || points[r] == 'D') {
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
        if (points[r] == 'C' || points[r] == 'D') {
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
    Arrays to_C and to_D tell if there is a path from a certain point to point C/D (point -> C/D = 1).
    To create these arrays, we iterate through the points(k's) between the given source and the charging stations 
    and test if there is an edge/path from the source to the charging stations through the k's.
    Example: 
    General Case: If P -> k = 1 and k -> C = 1, then P -> C = 1. 
    Case1 (based on the given): A directly to C = 0, but A -> B = 1 and B -> C = 1. Thus, A -> C = 1.
    */

    for (point = 0; point < NUM_POINTS; point++) {
        for (k = point; k < NUM_POINTS; k++) {
            if (road_networks[k][POINT_C]) {
                to_C[point] = 1;
                break;
            }
            else if (road_networks[k][POINT_D]) {
                to_D[point] = 1;
                break;
            }
            else {
                continue;
            }
        }
        // printf("%c %d %d\n", points[point], to_C[point], to_D[point]);       // for debug
    }

    /*
    Do while ensures that users enter a known point only.
    */
    do {
        printf("Which point are you located? (0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H, 8 - I): ");
        scanf("%d", &point);
    } while (point < 0 || point > 8);

    printf("At point: %c\n", points[point]);

    /*
    Determines the nearest charging station of a point if that point has a true value in the arrays to_C/D.
    */
    if (point == POINT_C || point == POINT_D) {
        printf("point: %c is a charging station.\n", points[point]);
    }
    else if (to_C[point]) {
        printf("point: C arrived to charging station.\n");
    }
    else if (to_D[point]) {
        printf("point: D arrived to charging station.\n");
    }
    else {
        printf("point: No charging station found.\n");
    }

    return 0;
}