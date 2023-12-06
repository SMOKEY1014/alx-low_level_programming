#include "main.h"

char *confirm_path(char *cmd)
{
    char *path = getenv("PATH");
    char *path_dup = strdup(path);

    /*tokenising*/
    char *folder = strtok(path_dup, ":");

    /* Loop for searching the exec-ables in the folders */
    while(folder != NULL)
    {
        char *complete_path = malloc(strlen(folder) + strlen(cmd) + 2);
        sprintf(complete_path,"%s/%s", folder, cmd);
        
        if (access(complete_path, X_OK) == 0)
        {
            free(path_dup);
            return(complete_path);
        }
        free(complete_path);
        folder = strtok(NULL, ":");
    }
    }