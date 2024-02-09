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
	int i;
	unsigned int sum;

	i = 0;
	sum = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		i++;
	}

	i--;
	while (i >= 0)
	{
		if (!((b[i] == '0') || (b[i] == '1')))
			return (0);

		if (b[i] == '1')
		{
			sum = sum + (powr(2, i));
		}

		i--;
	}

	return (sum);
}
