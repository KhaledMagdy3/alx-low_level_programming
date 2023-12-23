#include "main.h"
#include <stdio.h>

/**
 * times_table -  prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, u;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			u = i * j;
			_putchar(u + '0');

			if ((u <= 9) && (j != 9))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((u >= 9) && (j != 9))
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
