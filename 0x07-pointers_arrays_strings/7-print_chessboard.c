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
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
