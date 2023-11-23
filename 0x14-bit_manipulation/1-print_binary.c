#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The unsigned long int to be printed in binary.
 *
 * Return: No return value (void).
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned long int mask;
	int leading_zeros;
	unsigned int num_bits;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	leading_zeros = 0;


	while ((mask & n) == 0)
	{
		mask >>= 1;
		leading_zeros++;
	}

	num_bits = sizeof(unsigned long int) * 8 - leading_zeros;
	for (i = 0; i < num_bits; i++)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}

		mask >>= 1;
	}
}
