#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: char
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, l;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	l = i;

	while (l >= 0)
	{
		_putchar(s[l]);
		--l;
	}

	_putchar('\n');

}
