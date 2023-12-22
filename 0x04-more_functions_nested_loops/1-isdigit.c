#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit (0 through 9).
 *
 *  @c: integer
 *
 *  Return: 1,0
 */

int _isdigit(int c)
{
	int u;

	if (c >= 48 && c <= 57)
	{
	u = 1;
	}
	else
	{
	u = 0;
	}

	return (u);
}
