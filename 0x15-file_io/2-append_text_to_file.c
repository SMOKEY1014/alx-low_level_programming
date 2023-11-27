#include "main.h"

/**
 *append_text_to_file - a program that appends text at the end of a file
 *@text_content: content to be added
 *@filename: filename
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int is;
	int alphabets;
	int new;

	if (!filename)
		return (-1);
	is = open(filename, O_WRONLY | O_APPEND);

	if (is == -1)
		return (-1);
	if (text_content)
	{
		for (alphabets = 0; text_content[alphabets]; alphabets++)
			;
		new = write(is, text_content, alphabets);
		if (new == -1)
			return (-1);
	}
	close(is);
	return (1);
}
