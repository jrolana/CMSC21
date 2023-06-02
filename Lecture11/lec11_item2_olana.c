/*
This program determines whether two words are anagrams using arrays and pointers.
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
        printf("%c\t", *(key + i));
    }
    printf("\n");
    for (i = 0; i < 26/2; i++) {
        printf("%d\t", *(occurrences + i));
    }
    printf("\n\n");
    for (i = 26/2; i < 26; i++) {
        printf("%c\t", *(key + i));
    }
    printf("\n");
    for (i = 26/2; i < 26; i++) {
        printf("%d\t", *(occurrences + i));
    }
}

void scan_word(int occurrences[26]) {
    /*
    The name of an array (occurrences in this case) gives the address of the very first element. Thus,
    *occurences == occurences[0]
    To access other elements of the array, add an iterator to it (toupper(c) - 'A' in this case).
    *(occurences + i) == occurences[i]
    */
    char c;
    int i;

    while((c = getchar()) != '\n') {
        if (isalpha(c)) {
            i = toupper(c) - 'A';
            (*(occurrences + i))++;
        }
    }

    // print_array(occurrences);
}

bool is_anagram(int occurrences1[26], int occurrences2[26]) {
    /*
    Same use of pointer as with scan_word.
    occurences[i] == *(occurences + i)
    */
    int i, same = 1;

    for (i = 0; i < 26; i++) {
        if (*(occurrences1 + i) != *(occurrences2 + i)) {
            same = 0;
            break;
        } 
    }

   return same; 
}
