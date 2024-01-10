#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function that prints a string
 *
 * @s: char
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	_putchar('\n');

	return ;
}
