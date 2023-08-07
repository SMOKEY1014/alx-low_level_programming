#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Read and print contents of the text file.
 * @filename: "filename" is the name of the file to read.
 * @letters: The amount of letters to read and print.
 * Return: The correct number of letters read and printed,
 *         or 0 if there was an error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer_size = malloc(sizeof(char) * (letters + 1));
	ssize_t lettersRead = 0;
	FILE *fopen_read;

	fopen_read = fopen(filename, "r");

	if (fopen_read == NULL)
		free(buffer_size);
		return (0);

	if (buffer_size = NULL)
	{
		return (0);
	}

	lettersRead = fread(buffer_size, 1, letters, fopen_read);
	if (lettersRead == 0 || ferror(fopen_read))
	{
		fclose(fopen_read);
		free(buffer_size);
		return (0);
	}

	buffer_size[lettersRead] = '\0';
	fclose(fopen_read);

	_putchar("%s", buffer_size);
	free(buffer_size);


	return (lettersRead);

}
