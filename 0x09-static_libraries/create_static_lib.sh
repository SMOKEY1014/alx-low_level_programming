#!/bin/bash

c_files=$(find . -maxdepth 1 -type f -name "*.c")

for file in $c_files; do
	gcc -c "$file" -o "${file%.c}.o"
done

ar rcs liball.a *.o
