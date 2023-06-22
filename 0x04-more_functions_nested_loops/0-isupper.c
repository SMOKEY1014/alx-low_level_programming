
#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1); // Uppercase character
	}
	else
	{
		return (0); // Not an uppercase character
	}
}

