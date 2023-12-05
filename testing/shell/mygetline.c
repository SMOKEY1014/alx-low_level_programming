// #include "main.h"

// int main(void)
// {
//     /* Declaring viriables */
//     int chars_read;
//     char *line = NULL;
//     size_t length = 0;

//     /* Tokenizing the string string */
//     char *delimiters = " ";
//     char *tokens; /* Allocate memory for tokens */

//     /* The Prompt */
//     write(1, "-$ ",3);

//     /*Get user input */
//      chars_read = getline(&line, &length, stdin);
//      if (chars_read == -1)
//      {
//         perror("Error recognizing input");
//         return(-1);
//      }
//      else
//      {
//         tokens = strtok(line, delimiters);

//         while( tokens != NULL)
//         {
//             /* check if the token command is a built-in.(cd, rm).
//             * if it's not built-in, execute it
//             */

//            /*Forking*/
//            pid_t pid = fork();

//            if(pid == -1)
//            {
//             perror("Forking failed");
//             return(-1);
//            }
//            else if (pid == 0)
//            {
//             /* Introduce the child process */
//             char *cmd_path = confirm_path(tokens);
//             if (cmd_path == NULL)
//             {
//                 perror("Command doesn't exist!");
//                 exit(1);
//             }
//             int executor = execve(cmd_path, &tokens, __environ);
//             if (executor == -1)
//             {
//                 perror("Program execution failed !");
//                 exit(EXIT_FAILURE);
//             }
            
//            }
//         }
//         return(0);
//      }

// }