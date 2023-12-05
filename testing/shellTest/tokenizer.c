#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARGUMENTS 10

int main(void)
{
    char input[] = "command arg env";

    char *delimiters = " ;:";
    char *commands[MAX_ARGUMENTS];
    int num_commands = 0;

    /* Tokenize the input string based on semicolons */
    char *token = strtok(input, delimiters);

    while (token != NULL && num_commands < MAX_ARGUMENTS)
    {
        commands[num_commands] = token;
        num_commands++;

        token = strtok(NULL, delimiters);

        
    }
    
    for(int b = 0; b < num_commands; b++)
        {
            printf("Arg %d : %s \n", b, commands[b]);
        }

    // /* Process each command separately */
    // for (int i = 0; i < num_commands; i++)
    // {
    //     char *args[MAX_ARGUMENTS];
    //     int num_args = 0;

    //     /* Tokenize each command based on spaces */
    //     token = strtok(commands[i], " ");

    //     while (token != NULL && num_args < MAX_ARGUMENTS)
    //     {
    //         args[num_args] = token;
    //         num_args++;

    //         token = strtok(NULL, " ");
    //     }

    //     /* Do something with the arguments (e.g., execute the command) */
    //     printf("Command %d:\n", i + 1);
    //     for (int j = 0; j < num_args; j++)
    //     {
    //         printf("  Arg %d: %s\n", j + 1, args[j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}

