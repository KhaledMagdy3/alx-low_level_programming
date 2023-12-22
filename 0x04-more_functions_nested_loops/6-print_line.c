#include "main.h"
#include <stdio>

/**
 * print_line - draws a straight line
 * @n: integer
 *
 * REturn: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
