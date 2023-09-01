#include "main.h"

/**
 * get_endianness - Check the endianness.
 *
 * Return: 0 for Big endian, 1 for little endian.
 */

int get_endianness(void)
{
	unsigned int t = 1;
	char *pt = (char *)&t;

	return (*pt == 1);
}
