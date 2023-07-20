#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints the strings and followed by a new line.
 * @separator: A string to be printed between strings.
 * @n: The number of strings(elements) passed to the function.
 * @...: The variable number of strings to be printed.
 *
 * Description: If separator is NULL it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *string;
	unsigned int x;

	va_start(strings, n);

	for (x = 0; x < n; x++)
	{
		string = va_arg(strings, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
