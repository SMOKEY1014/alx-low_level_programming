#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Read and print contents of the text file.
 * @filename: "filename" is the name of the file to read.
 * @letters: The amount of letters to read and print.
 * Return: The correct number of letters read and printed,
 *         or 0 if there was an error.
 */
ssize_t read_textfile(const char *filename, size_t letters)

{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);

}
