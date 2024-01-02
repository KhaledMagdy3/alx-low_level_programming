#include <stdio.h>
#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: char
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
