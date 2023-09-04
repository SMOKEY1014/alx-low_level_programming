#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text content to append to the file (can be NULL).
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int write_content;
	int strln;
	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		strln = strlen(text_content);
		write_content = write(f, text_content, strln);
		if (write_content == -1)
		{
			close(f);
			return (-1);
		}
	}

	close(f);
	return (1);
}
