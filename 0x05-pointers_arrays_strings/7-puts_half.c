#include <stdio.h>
#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: char
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		for (j = ((i + 1) / 2); j <= i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = ((i + 2) / 2); j <= i; j++)
		{
			_putchar(str[j]);
		}
	}

	_putchar('\n');
}
