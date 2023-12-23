#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: integer
 *
 * Return: void
 */

void print_times_table(int n)
{

	int i, j, u, k, x;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			u = i * j;
			k = u / 10;
			x = u % 10;

			if (k == 0)
			{
				if (j == 0)
				{
					_putchar(u + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(u + '0');
				}
			}
			else
			{
				_putchar(k + '0');
				_putchar(x + '0');
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
