#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t parent_pid = getpid();
    printf("Parent PID: %d\n", parent_pid);

    return 0;
}
