#include "main.h"
#include <string.h>

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: r pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c = 0;
	int length_n1 = stringlen(n1);
	int length_n2 = stringlen(n2);
	int max_length = (length_n1 > length_n2) ? length_n1 : length_n2;
	int i = length_n1 - 1;
	int j = length_n2 - 1;
	int k = size_r - 1;

	while (i >= 0 || j >= 0 || c > 0)
	{
	int dgt1 = (i >= 0) ? (n1[i] - '0') : 0;
	int dgt2 = (j >= 0) ? (n2[j] - '0') : 0;
	int sum = dgt1 + dgt2 + c;


	if (k < 0)
	{
		return 0;
	}

	r[k] = (sum % 10) + '0';
	c = sum / 10;

	i--;
	j--;
	k--;
	}

	if (c > 0)
	{

		if (k < 0)
		{
			return 0;
		}
		r[k] = c + '0';
		k--;
	}


	if (k >= 0)
	{
		memmove(r, &r[k + 1], size_r - k - 1);
	}

	return r;
}
