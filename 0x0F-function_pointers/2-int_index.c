#include "function_pointers.h"
/**
 * int_index - returns index place if comparison = true, else -1
 * @array: arr
 * @size: number of elements in array
 * @cmp: pointer to function of 1 of the 3 in main
 * Return: 0 nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}

