#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its paramters.
 * @n: The number of paramters passed/ to be returned to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	va_list a;
	unsigned int x, sum = 0;

	va_start(a, n);

	for (x = 0; x < n; x++)
		sum += va_arg(a, int);

	va_end(a);

	return (sum);
}
