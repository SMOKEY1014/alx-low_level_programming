#include "main.h"


/**
 * print_binary - changes a number to binary version and prints it.
 *
 * @n: Number to be changed and printed.
 *
 */

void print_binary(unsigned long int n)
{
	int move = sizeof(unsigned long int) * 8 - 1;
	int got_it = 0;
	unsigned long bit;

	while (move >= 0)
	{
		bit = n >> move;

		if (bit & 1)
		{
			_putchar('1');
			got_it = 1;
		}
		else if (got_it)
		{
			_putchar('0');
		}

		move--;
	} while (move >= 0);

	if (!got_it)
	{
		_putchar('0');
	}
}

