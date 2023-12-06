#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char path[1035];

    /* Open the command for reading. */
    fp = popen("echo $PATH", "r");
    if (fp == NULL) {
        printf("Failed to run command\n");
        exit(EXIT_FAILURE);
    }

    /* Read the output a line at a time - output it. */
    while (fgets(path, sizeof(path) - 1, fp) != NULL) {
        printf("%s", path);
    }

    /* close */
    pclose(fp);

    return 0;
}
