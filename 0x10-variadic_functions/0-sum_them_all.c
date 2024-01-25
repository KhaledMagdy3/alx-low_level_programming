#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: const unsigned int
 *
 * Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list var;

	va_start(var, n);

	int s = 0;
	int x;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		x = va_arg(var, int);
		s = s + x;
	}

	va_end(var);

	return (s);
}
