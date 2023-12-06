#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_ARGUMENTS 10
#define MAX_PATH_LENGTH 1024

void executeCommand(char *input, char *path) {
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

    // Search for the executable in the directories listed in path
    char *programPath = NULL;
    for (int i = 0; i < MAX_ARGUMENTS; i++) {
        char full_path[MAX_PATH_LENGTH];
        snprintf(full_path, sizeof(full_path), "%s/%s", path, args[0]);

        if (access(full_path, X_OK) == 0) {
            programPath = strdup(full_path);
            break;
        }
    }

    if (programPath == NULL) {
        fprintf(stderr, "Command '%s' not found in $PATH\n", args[0]);
        exit(EXIT_FAILURE);
    }

    // Execute the program
    char *envp[] = { NULL };

    if (execve(programPath, args, envp) == -1) {
        perror("execve");
        exit(EXIT_FAILURE);
    }
}

int main(void) {
    FILE *fp;
    char path[1035];

    // Open the command for reading
    fp = popen("echo $PATH", "r");
    if (fp == NULL) {
        printf("Failed to run command\n");
        exit(EXIT_FAILURE);
    }

    // Read the output a line at a time
    if (fgets(path, sizeof(path) - 1, fp) != NULL) {
        // Tokenize the path using ":"
        char *delimiters = ":";
        char *tokens[MAX_ARGUMENTS];
        int num_tokens = 0;

        char *token = strtok(path, delimiters);
        while (token != NULL && num_tokens < MAX_ARGUMENTS) {
            tokens[num_tokens] = token;
            num_tokens++;
            token = strtok(NULL, delimiters);
        }

        // Close the pipe
        pclose(fp);

        // Prompt for user input
        char input[100];
        printf("$ - ");
        scanf("%99[^\n]", input);

        // Execute the command using the path tokens
        executeCommand(input, tokens[0]);
    }

    return 0;
}
