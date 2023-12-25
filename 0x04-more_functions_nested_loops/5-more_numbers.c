#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, k, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j / 10;
			x = j % 10;
			if (j <= 9)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar(k + '0');
				_putchar(x + '0');
			}
		}

		_putchar('\n');
	}
}
