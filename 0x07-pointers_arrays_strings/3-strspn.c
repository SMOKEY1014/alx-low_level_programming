#include <stdio.h>

/*
 * unsigned int _strspn() :  gets the length of a prefix substring.
 * @s : input valeu.
 * @accept : input valeu.
 * @length : starting point.
 *
 * Return : @length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0' && *accept != '\0')
	{
		if (*s != *accept)
		{
			break;
		}
		length++;
		s++;
		accept++;
	}

	return length;
}
