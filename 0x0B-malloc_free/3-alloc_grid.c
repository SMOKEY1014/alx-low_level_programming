#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **dim;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	dim = malloc(sizeof(int *) * height);

	if (dim == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		dim[y] = malloc(sizeof(int) * width);

		if (dim[y] == NULL)
		{
			for (; y >= 0; y--)
				free(dim[y]);

			free(dim);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
			dim[y][x] = 0;
	}

	return (dim);
}

