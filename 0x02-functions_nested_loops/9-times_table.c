#include "main.h"
#include <stdio.h>

/**
 * times_table -  prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, u, k, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			u = i * j;
			k = u / 10;
			x = u % 10;

			if (u <= 9)
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
