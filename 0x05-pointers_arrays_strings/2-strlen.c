#include <stdio.h>
#include "main.h"

/**
 * _strlen - unction that returns the length of a string
 *
 * @s: char
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
