#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character.
 *
 * @c: integer
 *
 * Return: 1,0
 */

int _isupper(int c)
{
	int u;

	if (c >= 'A' && c <= 'Z')
	{
	u = 1;
	}
	else if (c >=  'a' &&  c <= 'z')
	{
	u = 0;
	}

	return (u);
}
