#include "main.h"

/**
*read_textfile - a program that reads a text file and prints
*it to the POSIX standard output
*@letters: numbers of letters printed
*@filename: filename
*Return: if filename is NULL return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

	int is;
	ssize_t now, new;
	char *buffer;

	if (!filename)
		return (0);
	is = open(filename, O_RDONLY);

	if (is == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	now = read(is, buffer, letters);
	new = write(STDOUT_FILENO, buffer, now);
	close(is);
	free(buffer);
	return (new);
}
