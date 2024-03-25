#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: integer
 *
 * Return: integer
 */

int _abs(int n)
{
	int u;

	if (n < 0)
	{
		u = (-1 * n);
	}
	else
	{
		u = n;
	}

	return (u);
}
