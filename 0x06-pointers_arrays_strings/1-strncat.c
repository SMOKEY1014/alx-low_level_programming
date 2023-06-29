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

char *_strncat(char *dest, const char *src, int n)
{
	int a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (*src != '\0' && n > 0)
	{
		dest[a] = *src;
		a++;
		src++;
		n--;
	}
	a = '\0';
	return (dest);
}
