#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TOKENS 50

int main(void) {
    FILE *fp;
    char path[1035];

    /* Open the command for reading. */
    fp = popen("echo $PATH", "r");
    if (fp == NULL) {
        printf("Failed to run command\n");
        exit(EXIT_FAILURE);
    }

    /* Read the output a line at a time. */
    if (fgets(path, sizeof(path) - 1, fp) != NULL) {
        // Tokenize the path using ":"
        char *delimiters = ":";
        char *tokens[MAX_TOKENS];
        int num_tokens = 0;

        char *token = strtok(path, delimiters);
        while (token != NULL && num_tokens < MAX_TOKENS) {
            tokens[num_tokens] = token;
            num_tokens++;
            token = strtok(NULL, delimiters);
        }

        // Print the tokens
        printf("Tokens:\n");
        for (int i = 0; i < num_tokens; i++) {
            printf("%s\n", tokens[i]);
        }
    }

    /* close */
    pclose(fp);

    return 0;
}
