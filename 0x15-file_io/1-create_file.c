#include "main.h"


/**
 * create_file - Creates a file and writes to it.
 *
 * @filename: filename is yhe file name to create.
 *
 * @text_content: The text content to print to the file.
 *
 * Return: 1 on success, -1 on failure.
 */


int create_file(const char *filename, char *text_content)
{
	int f;
	int write_result;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (f == -1)
		return (-1);
	
	if (text_content != NULL)
	{
		write_result = write(f, text_content, strlen(text_content));
		if (write_result == -1)
		{
			close(f);
			return (-1);
		}
	}

	close(f);
	return (1);
}
