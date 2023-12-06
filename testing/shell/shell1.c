#include "main.h"

int main(void)
{
    /* Declaring variables*/
    int chars_read;
    char *line = NULL;
    size_t length = 0;

    /* Tokenizing the string */
    char *delimiters = " \t\r\n\a";
    char *tokens; /* Allocate memory for tokens */

    while (1)
    {
        /* The Prompt */
        write(1, "-$ ", 3);

        /* Get user input */
        chars_read = getline(&line, &length, stdin);
        if (chars_read == -1)
        {
            perror("Error recognizing input");
            return -1;
        }

        line[chars_read - 1] = '\0';

        /* Tokenizing the line to an array of strings */
        char *args[MAX_ARGUMENTS]; /* Assuming maximum number of arguments */
        int i = 0;

        tokens = strtok(line, delimiters);

        while (tokens != NULL && i < MAX_ARGUMENTS)
        {
            args[i++] = tokens;
            tokens = strtok(NULL, delimiters);
        }
        args[i] = NULL;

        /* Check for built-in commands */
        if (strcmp(args[0], "exit") == 0)
        {
            /* Exit shell */
            builtin_exit();
        }
        else if (strcmp(args[0], "cd") == 0)
        {
            /* Change directory */
            builtin_cd(args[1]);
        }
        else
        {
            /* Forking */
            pid_t pid = fork();

            if (pid == -1)
            {
                perror("Forking failed");
                return -1;
            }
            else if (pid == 0)
            {
                /* Child process */
                char *cmd_path = confirm_path(args[0]);
                if (cmd_path == NULL)
                {
                    fprintf(stderr, "Command '%s' doesn't exist!\n", args[0]);
                    free(line);
                    exit(EXIT_FAILURE);
                }

                /* Execute the command */
                execve(cmd_path, args, environ);
                perror("Program execution failed !");
                free(line);
                exit(EXIT_FAILURE);
            }
            else
            {
                /* Parent process */
                int status;
                waitpid(pid, &status, 0);

                if (WIFEXITED(status) && WEXITSTATUS(status) != 0)
                {
                    printf("\nChild process exited with status: %d\n", WEXITSTATUS(status));
                }
            }
        }

        free(line);
    }

    return (0);
}
