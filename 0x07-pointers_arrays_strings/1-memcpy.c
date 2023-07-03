#include <stdio.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src : bytes copied from
 * @dest : bytes copied to
 * @n : Number of bytes.
 * Return: @dest (returns a Pointer)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int r = n;

	for (; i < r;i++ )
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
