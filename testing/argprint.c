#include <stdio.h>

int main(int ac, char **av) {
    // Start from index 1 to skip the program name (av[0])
    int i = 1;

    // Loop until a NULL pointer is encountered
    while (av[i] != NULL) {
        printf("%s\n", av[i]);
        i++;
    }

    return 0;
}

