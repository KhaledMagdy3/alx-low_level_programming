#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @separator: const char
 * @n: const unsigned int
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list var;
	int x;
	unsigned int i;

	va_start(var, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(var, int);

		if ((separator == NULL) || (i == n))
		{
			printf("%d", x);
		}
		else if (i < n)
		{
			printf("%d%c", x, separator);
		}
	}

	va_end(var);

}
