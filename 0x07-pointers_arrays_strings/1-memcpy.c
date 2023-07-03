#include <stdio.h>

/*
 * _memcpy : copies n bytes from memory area src to memory area dest
 * @src : bytes copied from
 * @dest : bytes copied to
 *
 * Return : @dest (returns a Pointer)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}
