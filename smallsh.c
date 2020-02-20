#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARGS 512
#define MAX_CHARS 2048

void printStringArr(char **arr, int numArgs);

void main() {
    char args[MAX_ARGS][256] = {'\0'};
    int numCharsEntered = -5;
    // strcpy(args[0], "Hi");
    size_t bufferSize = 2048;
    char *buffer = NULL;
    int numArgs = 0;
    int i;

    while (true) {
        printf(": ");
        fflush(stdout);
        numCharsEntered = getline(&buffer, &bufferSize, stdin);
        buffer[strlen(buffer) - 1] = '\0';

        // if input is comment or blank, ignore it || (strlen(buffer) == 0) ||
        if ((strlen(buffer) == 0) || ()) {
            printf("Blank\n");
        }

        // extract each arg and put it in array
        char *token = strtok(buffer, " ");
        // strcpy(args[i], token);
        // token = strtok(NULL, " ");
        while (token != NULL) {
            strcpy(args[numArgs], token);
            token = strtok(NULL, " ");
            numArgs++;
        }
    }
}

void printStringArr(char **arr, int numArgs) {
    int i;
    for (i = 0; i < numArgs; i++) {
        printf("Arg #%d: %s\n", i, arr[i]);
    }
}
