#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase character
 *
 * @c: integer
 *
 * Return: integer
 */

int _islower(int c)
{
	int u;

	if (c >= 'a' && c <= 'z')
	{
		u = 1;
	}
	else
	{
		u = 0;
	}

	return (u);
}
