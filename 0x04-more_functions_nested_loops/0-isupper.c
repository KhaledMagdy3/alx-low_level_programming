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

	if (c >= 65 && c <= 90)
	{
	u = 1;
	}
	else if (c >=  97 &&  c <= 122)
	{
	u = 0;
	}

	return (u);
}
