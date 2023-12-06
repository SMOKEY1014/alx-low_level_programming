#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

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
        fprintf(stderr, "Command '%s' not found in $PATH\n", args[0]);
        exit(EXIT_FAILURE);
    }

    // Execute the program
    char *envp[] = { NULL };
    execve(programPath, args, envp);
    perror("execve");
    exit(EXIT_FAILURE);
}

int main(void) {
    while (1) {
        char input[100];
        printf("$ - ");
        fgets(input, sizeof(input), stdin);

        // Remove newline character from input
        size_t input_length = strlen(input);
        if (input_length > 0 && input[input_length - 1] == '\n') {
            input[input_length - 1] = '\0';
        }

        if (strcmp(input, "exit") == 0) {
            exit(EXIT_SUCCESS);
        } else if (strcmp(input, "") == 0) {
            // Empty input, ignore and continue
            continue;
        } else {
            // Fork and execute the command
            pid_t pid = fork();

            if (pid == -1) {
                perror("Forking failed");
                exit(EXIT_FAILURE);
            } else if (pid == 0) {
                // Child process
                executeCommand(input, "/usr/bin:/bin");  // You can add more directories to search in

                // If execve fails
                perror("execve");
                exit(EXIT_FAILURE);
            } else {
                // Parent process
                int status;
                waitpid(pid, &status, 0);

                if (WIFEXITED(status) && WEXITSTATUS(status) != 0) {
                    fprintf(stderr, "Child process exited with non-zero status %d\n", WEXITSTATUS(status));
                }
            }
        }
    }

    return 0;
}
