#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *pointer = dest;

	while (*pointer != '\0')
	{
		pointer++;
	}

	while (*src != '\0' && n > 0)
	{
		*pointer = *src;
		pointer++;
		src++;
		n--;
	}
	*pointer = '\0';
	return (dest);
}
