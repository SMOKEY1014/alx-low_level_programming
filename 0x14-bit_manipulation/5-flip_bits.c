#include "main.h"

/**
 * flip_bits - Counts bits to flip fron one number to the next.
 *
 * @n: The 1st num.
 *
 * @m: The 2nd num.
 *
 * Return: The bits number needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_output = n ^ m;
	unsigned int counter = 0;

	if (xor_output != 0)
	{
		counter += xor_output & 1;
		xor_output >>= 1;
	}

	return counter;
}
