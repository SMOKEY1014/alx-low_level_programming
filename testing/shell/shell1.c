#include "main.h"

int main(void)
{
    /* Declaring variables */
    int chars_read;
    char *line = NULL;
    size_t length = 0;

    /* Tokenizing the string string */
    char *delimiters = " ";
    char *tokens; /* Allocate memory for tokens */

    /* The Prompt */
    write(1, "-$ ",3);

    /*Get user input */
     chars_read = getline(&line, &length, stdin);
     if (chars_read == -1)
     {
        perror("Error recognizing input");
        return(-1);
     }
     else
     {
        line[chars_read - 1] = '\0';
        /* Tokenizing the line to an array of string */
        char *args[MAX_ARGUMENTS]; /*Assuming maximum number of arguments*/
        int i = 0;

        tokens = strtok(line, delimiters);

        while( tokens != NULL)
        {
            /* check if the token command is a built-in.(cd, rm).
            * if it's not built-in, execute it
            */
           while(tokens != NULL && i < MAX_ARGUMENT)
            {
                args[i++] = tokens;
                tokens = strtok(NULL, delimiters);
            }
           args[i] = NULL;

           /*Forking*/
           pid_t pid = fork();

           if(pid == -1)
           {
            perror("Forking failed");
            return(-1);
           }
           else if (pid == 0)
           {
            /* Introduce the child process */
            char *cmd_path = confirm_path(args[0]);
            if (cmd_path == NULL)
            {
                fprintf(stderr, "Command '%s' doesn't exist!\n", args[0]);
                exit(EXIT_FAILURE);
            }

            int executor = execve(cmd_path, args, __environ);
            if (executor == -1)
            {
                perror("Program execution failed !");
                exit(EXIT_FAILURE);
            }
            
           }

         }

        free(line);
     }

}