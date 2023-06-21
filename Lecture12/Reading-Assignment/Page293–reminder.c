// A One-month Reminder List

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void) 
{
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], msg_str[MSG_LEN + 3];             
    int day, i, j, num_remind = 0;

    for (;;) {                                         // Loops the body until the program hits the maximum number of reminders.
        if (num_remind == MAX_REMIND) {                // num_remind counts and limits the reminder this program can store.
            printf("-- No space left -- \n");
            break;
        }

        printf("Enter day and reminder: "); 
        scanf("%2d", &day);                             // %2d limits the input to be 2-digit long only.
        sprintf(day_str, "%2d", day);                   // Converts numbers to strings.
        read_line(msg_str, MSG_LEN);                    // Reads multiple strings and stores it in an array of strings.

        /*
        MALABONG PART
        */
        for (i = 0; i < num_remind; i++) {
            if (strcmp(day_str, reminders[i] < 0)) {    // If the date isn't in the reminder list(reminders[i]), then the loop stops.
                break;
            }
            for (j = num_remind; j > i; j--) {
                strcpy(reminders[j], reminders[j - 1]); // If it is, then all reminders will be move down 1 position in the list.
            }
        }

        strcpy(reminders[i], day_str);                  // Date will then be copied to the reminders[i].
        strcat(reminders[i], msg_str);                  // Its associated group of strings will also be added in the reminders[i].

        num_remind++;                                   // num_remind gets added everytime a string was added into the reminders list.
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++) {
        printf("%s\n", reminders[i]);
    }

    return 0;
}

int read_line(char str[], int n) {
    int ch, i = 0;

    /*
    Reads a character until a new-line character has encountered, which enables the program to read sentences in 1 line. 
    */
    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
        str[i] = '\0';  
    }

    return i;
}