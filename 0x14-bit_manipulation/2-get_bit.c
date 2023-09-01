#include "main.h"

/**
 * get_bit - extract the valeu of bit from the given index as parameter.
 *
 * @n: The bit number.
 *
 * @index: starting from 0, get the index of the bit.
 *
 * Return: The indexes bit valeu, or -1 if an runto an error.
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return -1;
	}
	return (n >> index) & 1;
}

