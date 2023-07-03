#include "main.h"

/**
<<<<<<< HEAD
 * print_chessboard - Entry point
=======
 * print_chessboard - Entry point for function
>>>>>>> 2f3ed62d3d076e68862483f08c3b42a873f86738
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
<<<<<<< HEAD
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
			_putchar('\n');
		}
	}
}
=======
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}

>>>>>>> 2f3ed62d3d076e68862483f08c3b42a873f86738
