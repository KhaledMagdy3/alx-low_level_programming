#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 *
 * @format: const char * const
 *
 * Return: void
*/

void print_all(const char * const format, ...)
{
	va_list var;
	char *sep = ", ";
	char *x;
	int j = 0, i = 0;

	va_start(var, format);

	while (format && format[j])
		i++;

	while (format && format[i])
	{
		if (i == (j - 1))
		{
			sep = "";
		}
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(var, char), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(var, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(var, float), sep);
				break;
			case 's':
				x = va_arg(var, char *);
				if (x == NULL)
					x = "(nill)";
				printf("%s%s", x, sep);
				break;
		}
		i++;
	}

	printf("\n");

	va_end(var);
}
