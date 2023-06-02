/*
This program determines whether two words are anagrams using arrays only.
Written in 2023 by Jhoanna Olana
*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void print_array(int occurrences[26]); // debug purpose

void scan_word(int occurrences[26]);

bool is_anagram(int occurrences1[26], int occurrences2[26]);

int main() {
    int occurrences1[26] = {0}, 
        occurrences2[26] = {0};

    printf("Enter first word: ");
    scan_word(occurrences1);

    printf("\n\nEnter second word: ");
    scan_word(occurrences2);

    bool same = is_anagram(occurrences1, occurrences2);

    if (same) {
        printf("\nThe words are anagrams.\n");
    } else {
        printf("\nThe words are not anagrams.\n");
    }

    return 0;
}

void print_array(int occurrences[26]) {
    int i;
    char key[] = "abcdefghijklmnopqrstuvwxyz";

    for (i = 0; i < 26/2; i++) {
        printf("%c\t", key[i]);
    }
    printf("\n");
    for (i = 0; i < 26/2; i++) {
        printf("%d\t", occurrences[i]);
    }
    printf("\n\n");
    for (i = 26/2; i < 26; i++) {
        printf("%c\t", key[i]);
    }
    printf("\n");
    for (i = 26/2; i < 26; i++) {
        printf("%d\t", occurrences[i]);
    }
}

void scan_word(int occurrences[26]) {
    /*
    Whenever a string is entered, it will be tested if its every character (c) is alphabet. Then if it is, the value at 
    occurences[i] will be added. Index (i) is determined by subtracting the ASCII value of the ASCII value of 'A' from
    the uppercase version of c. Example: c = 'E' 
    index(i) = 'A' - 'E' = 69 - 65 = 4 --> occurences[4] represents alphabet E
    */
    char c;

    while((c = getchar()) != '\n') {
        if (isalpha(c)) {
            occurrences[toupper(c) - 'A']++;
        }
    }

    //print_array(occurrences);
}

bool is_anagram(int occurrences1[26], int occurrences2[26]) {
    /*
    We compare every element of both arrays. If they are not the same, then same has a false value. 
    If not, then same has true value.
    */
    int i, same = 1;

    for (i = 0; i < 26; i++) {
        if (occurrences1[i] != occurrences2[i]) {
            same = 0;
            break;
        } 
    }

   return same; 
}
