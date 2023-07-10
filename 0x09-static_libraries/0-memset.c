#include "main.h"
#include <stdio.h>

/**
 * _memset - takes 3 parameters which are s, b and n.
 *
 * @s : pointer.
 * @b : constant byte.
 * @n : input valeu, the number of bytes to be filled.
 *
 * Return: changed array with new value for n bytes to s 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
