#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 *@s: char
 *
 * Return: void
 */

int _strlen_recursion(char *s)
{
	int i, x, y;

	i = 1;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	else
	{
		x = i / 10;
		y = i % 10;
		_putchar(x + '0');
		_putchar(y + '0');
	}
}
