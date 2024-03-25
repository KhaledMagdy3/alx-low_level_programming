#include <stdio.h>
#include "main.h"

/**
 * _puts - function that prints a string
 *
 * @s: char
 *
 * Return: void
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}
