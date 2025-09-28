#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

char KEY1[50] = "Key{c0ngr475_0n_k3y_0n3!}";

void clear_stdin_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


char *gets(char *str);


int main(int argc, char *argv[]) {
    char last[25];
    int pid = 0;
    char ui_f1[30];
    char ui_p[10];
    char ui_id[10];
    int no_please = 0;
    int b1 = 0;

    printf("CLARIFICATIONS: There are 3 parts to this program, passing all 3 will give you the flag\n\n");
    printf("Welcome! This program doesn't actually contain malware, but what if it did? 0_0\n");
    printf("If this were real malware, you computer would be DONE-ZO!! >:)\n");
    printf("Maybe in the future you could run a command to inspect some of the strings in a file?\n");
    printf("\nEnter answer for part 1 of 3 in the form of Key{}: ");

    while (!b1) {
        fgets(ui_f1, sizeof(ui_f1), stdin);  

        // Clear buffer incase excess input
        if (ui_f1[strlen(ui_f1) - 1] != '\n') {
            clear_stdin_buffer();
        }

        ui_f1[strcspn(ui_f1, "\n")] = 0;  // remove newline from input

        // check if it's equal to the flag!
        if (!strcmp(ui_f1, KEY1)) {
            printf("\nThat is the correct key!\n");
            b1 = 1;
        } else {
            printf("\nPlease try again: ");
        }
    }
    b1 = 0;

    printf("Well done on finding the Key!.\n");
    printf("Now for part2...\n\n");

    printf("Now imagine that this program requires a login with a username and password.\n");
    printf("You COULD try guessing, but where would you start?\n");
    printf("I wouldn't even start doing that because it's actually not possible to log in HAHAHA\n");
    printf("At least not the TRADITIONAL way...\n");
    printf("Rumors say that this login prompt uses the depreciated gets() function...\n");

    printf("\nPart 2 of 3, please find a way to login: \n");
    
    printf("\n=== LOGIN ===\n");
    while (!b1) {
        printf("Please enter the password: ");
        gets(ui_p); 

        if (no_please == 0) {
            printf("Password is incorrect!\n");
        } else {
            printf("Password is correct! Entering the mainframe...\n");
            b1 = 1;
        }
    }
    b1 = 0;

    printf("\nSo I guess THIS is why we don't use gets() anymore.\n");
    printf("Now let's move on to part 3...\n");
    printf("Now get me the PID of the process responsible for running this program...\n");

    pid = (int) getpid();
    while (!b1) {
        printf("\nPID: ");
        fgets(ui_id, sizeof(ui_id), stdin);
        if (atoi(ui_id) == pid) {
            printf("\nThat is the correct PID!\n");
            b1 = 1;
        } else {
            printf("\nINCORRECT, Please try again...\n");
        }
    }
    
    // HackUMBC{M4lw4r3_M4573r}
    last[0] = 'H';
    last[1] = 'a';
    last[2] = 'c';
    last[3] = 'k';
    last[4] = 'U';
    last[5] = 'M';
    last[6] = 'B';
    last[7] = 'C';
    last[8] = '{';
    last[9] = 'M';
    last[10] = '4';
    last[11] = 'l';
    last[12] = 'w';
    last[13] = '4';
    last[14] = 'r';
    last[15] = '3';
    last[16] = '_';
    last[17] = 'M';
    last[18] = '4';
    last[19] = '5';
    last[20] = '7';
    last[21] = '3';
    last[22] = 'r';
    last[23] = '}';
    last[24] = '\0';

    printf("You have passed all the tests! \nHere's the flag and go outside: %s", last);

    return 0;
}