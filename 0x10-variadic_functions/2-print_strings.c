#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: const char
 * @n: const unsigned int
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list var;
	char *x;
	unsigned int i;

	va_start(var, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(var, char *);

		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x);
		}

		if ((i != (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(var);
}
