#include "main.h"

/**
 * clear_bit - At the given index,set valeu to zero.
 *
 * @n: A pointer to the bit's number to be cleared.
 *
 * @index: The index, Starting from 0.
 *
 * Return: 1 for success, or -1 for otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int face = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~face;
	return (1);
}

