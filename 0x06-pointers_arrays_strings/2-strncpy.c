#include <stdio.h>

/*
* *x is a pointer
* _strncpy - copies a string
* @dest: input value
* @src: input value
* @n: input value
*
* Return: dest
*/

char *_strncpy(char *dest, const char *src, int n)
{
	char *x = dest;

	while (*src != '\0' && n > 0)
	{
		*x = *src;
		x++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*x = '\0';
		x++;
		n--;
	}

	return dest;
}
