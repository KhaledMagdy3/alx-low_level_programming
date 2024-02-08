#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int
 *
 * @b: const char *(pointing to a string of 0 and 1 chars)
 *
 * Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int sum;

	i = 0;
	sum = 0;
	while (b[i] != NULL)
	{
		i++;
	}

	while (i >= 0)
	{
		if (b[i] == 1)
		{
			sum = sum + (2 ^ i);
		}
		else if (b[i] != 0)
		{
			return (0);
		}
		i--;
	}

	return (sum);
}
