#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s : string is checked till null terminator
 * @c : checks if character is equal to c. If found, it returns the pointer s.
 *
 * Return: @s (pointer)
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
