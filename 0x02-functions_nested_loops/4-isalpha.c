#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: integer
 *
 * Return: integer
 */

int _isalpha(int c)
{
	int u;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		u = 1;
	}
	else
	{
		u = 0;
	}

	return (u);
}
