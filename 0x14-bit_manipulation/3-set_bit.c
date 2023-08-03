#include "main.h"

/**
 * set_bit - get the index given and set the valeu to 1.
 *
 * @n: pointer to index number to be set.
 *
 * @index: Starting from 0, the bit's index to be set.
 *
 * Return: 1 for successfully, or -1 if otherwise.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{

		return (-1);
	}

	*n |= 1UL << index;

	return (1);
}
