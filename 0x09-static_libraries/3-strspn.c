#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success) @length
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

	return (length);
}
