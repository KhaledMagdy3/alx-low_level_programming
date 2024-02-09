#include "main.h"

/**
 * powr - function to math calc power
 *
 * @base: int (the base)
 * @pw: int (the power)
 *
 * Return: unsigned int
*/

unsigned int powr(int base, int pw)
{
	unsigned int result;

	if (pw == 0)
	{
		return (1);
	}

	else if (pw == 1)
	{
		return (base);
	}

	result = 1;
	while (pw > 0)
	{
		result = result * base;
		pw--;
	}
	return (result);
}


/**
 * binary_to_uint - function converts a binary number to an unsigned int
 *
 * @b: const char *(pointing to a string of 0 and 1 chars)
 *
 * Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i;
	int len;

	if (b == NULL)
		return (0);

	len = strlen(b);

	num = 0;

	for (i = 0; i < len; i++)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);

		num = num + ((b[i] - '0') * (powr(2, (len - i - 1))));
	}
	return (num);
}
