#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}

	int size = max - min + 1;
	int *arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
