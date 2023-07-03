#include <stdio.h>

/*
 * _memset() : takes 3 parameters which are s, b and n.
 *
 * @s : pointer.
 * @b : constant byte.
 * @n : input valeu, the number of bytes to be filled.
 *
 * Return : @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
