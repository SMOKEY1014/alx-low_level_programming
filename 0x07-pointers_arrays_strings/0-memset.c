#include "main.h"
#include <stdio.h>

/**
 * _memset - takes 3 parameters which are s, b and n.
 *
 * @s : pointer.
 * @b : constant byte.
 * @n : input valeu, the number of bytes to be filled.
 *
 * return: changed array with new value for n bytes to s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
