#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= (i - 1); j++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
	}
	}
}
