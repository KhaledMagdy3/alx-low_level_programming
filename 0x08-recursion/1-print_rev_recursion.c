#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 *
 * @s: char
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		_print_rev_recursion(s + 1);
	}

	if (i >= 0)
	{
	_putchar(*s);
	_print_rev_recursion(s - 1);
	}
	else
		_putchar('\n');
}
