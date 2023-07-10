#!/bin/bash

# List all the C files in the current directory
c_files=$(find . -name "*.c")

# Compile each C file
for file in $c_files
do
	    # Extract the file name without the extension
	        output_file=$(basename -s .c $file)
		    
		    # Compile the C file and generate the output file
		        gcc $file -o $output_file
		done

