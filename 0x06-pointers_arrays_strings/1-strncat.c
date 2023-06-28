#include <stdio.h>

/* _strncat - concatenate two strings.
 * It will use at most n bytes from src.
 * src does not need to be null-terminated if it contains n or more bytes.
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return : dest (return a pointer to the resulting string dest)
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
