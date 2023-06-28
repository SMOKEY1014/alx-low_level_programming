#include <stdio.h>

/**
* reverse_array - reverses the array of integers.
* @a: array
* @n: number of elements of array
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int x = 0;
	int y = n - 1;

	while (x < y)
	{
		int temp = a[x];
		a[x] = a[y];
		a[y] = temp;

		x++;
		y--;
	}
}
