#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 *
 * @size: integer
 *
 * return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= (size - i); j++)
		{
			_putchar(' ');
		}
		for (k = (size - i); k < size; k++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
