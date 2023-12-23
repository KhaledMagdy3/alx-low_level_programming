#include "main.h"
#include <stdio.h>

/**
 * times_table -  prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; i++)
		{
			_putchar((i * j) + '0');

			if (((i * j) <= 9) && (j != 9))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (((i * j) >= 9) && (j != 9))
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
