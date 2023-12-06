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

    // Search for the executable in the specified path
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
        fprintf(stderr, "Command '%s' not found in $PATH or specified directories\n", args[0]);
        exit(EXIT_FAILURE);
    }

    // Execute the program
    char *envp[] = { NULL };
    execve(programPath, args, envp);

    // execve() only returns if there is an error
    perror("execve");
    exit(EXIT_FAILURE);
}

int main(void) {
    // Open the command for reading
    FILE *fp = popen("echo $PATH", "r");
    if (fp == NULL) {
        fprintf(stderr, "Failed to run command\n");
        return EXIT_FAILURE;
    }

    // Read the output a line at a time
    char path[MAX_PATH_LENGTH];
    if (fgets(path, sizeof(path), fp) != NULL) {
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

        char input[100];
        printf("$ - ");
        scanf("%99[^\n]", input);

        // Try to execute the command in each tokenized directory
        int i = 0;
        while (i < num_tokens) {
            executeCommand(input, tokens[i]);
            i++;
        }

        // If the command was not found in tokenized directories, try specified directories
        char *searchDirectories[] = {"/usr/bin/", "/sbin/","usr/sbin/", "/bin/", "/usr/local/bin/", "/opt/", NULL};
        i = 0;
        while (searchDirectories[i] != NULL) {
            executeCommand(input, searchDirectories[i]);
            i++;
        }

        // If the command was not found in any directory
        fprintf(stderr, "Command '%s' not found in specified directories\n", input);
        return EXIT_FAILURE;
    }

    fprintf(stderr, "Failed to read $PATH\n");
    return EXIT_FAILURE;
}

