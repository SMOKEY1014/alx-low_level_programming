#!/bin/bash

# Compile all .c files into object files
gcc -c -Wall -Werror -fpic *.c

# Create the dynamic library liball.so
gcc -shared -o liball.so *.o

# Clean up intermediate object files
rm *.o
