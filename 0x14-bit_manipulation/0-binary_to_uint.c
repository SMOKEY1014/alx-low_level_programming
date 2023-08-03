#include "main.h"


/**
 * binary_to_uint - Changes a binary digit to an unsigned interger number.
 *
 * @b: Points a string charecter(s) for binary number.
 *
 *
 * Return: The changed digit, or 0 if NULL.
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;
	int f = 0;
	char t;

	if (b != NULL)
	{
		while ( b[f] == '0' || b[f] == '1')
		{
			t = b[f];
			output = (output << 1) + (t - '0');
			f++;
		}
		return (output);
	}
	else
	{
		return(0);
	}
	
}
