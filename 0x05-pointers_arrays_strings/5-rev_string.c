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
	int i, l;
	
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i = l;

	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}

	_putchar('\n');
}
