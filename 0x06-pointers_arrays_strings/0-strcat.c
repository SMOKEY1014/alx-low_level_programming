#include "main.h"

/**
* char *_strcat - a function that appends the src string to the dest string
* including the overwriting the terminating null byte (\0) at the end of dest.
* and then adds a terminating null byte.
* x is a pointer.
* @dest: appends to
* @src: Appends from
* Return: pointer to the resulting string
*/

char *_strcat(char *dest, const char *src)
{
	char *x = dest;

	while (*x != '\0')
	{
		x++;
	}

	while (*src != '\0')
	{
		*x = *src;
		x++;
		src++;
	}
	*x = '\0';
	return (dest);
}
