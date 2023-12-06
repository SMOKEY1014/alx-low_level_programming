#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_ARGUMENTS 10

void executeCommand(char *input) {
    // Tokenize the input string
    char *delimiters = " \t\r\n\a";
    char *args[MAX_ARGUMENTS];
    int num_args = 0;

    char *token = strtok(input, delimiters);
    while (token != NULL && num_args < MAX_ARGUMENTS) {
        args[num_args] = token;
        num_args++;
        token = strtok(NULL, delimiters);
    }
    args[num_args] = NULL;

    // Execute the program
    char *programPath = args[0]; // The first token is assumed to be the program path
    char *envp[] = { NULL };

    if (execve(programPath, args, envp) == -1) {
        perror("execve");
        exit(EXIT_FAILURE);
    }
}
int main(void) {
    char input[100];  // Example input string = "/bin/ls -l"
    printf("$ - ");
    scanf("%99[^\n]", input);  // Read up to 99 characters until newline

    // Execute the command
    executeCommand(input);

    // This code will not be reached if execve is successful
    printf("This will not be printed.\n");

    return 0;
}