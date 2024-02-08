#include "main.h"

/**
*unsigned int _pow(unsigned int base, int pw)
*{
*	unsigned int result;
*
*	if (pw == 0)
*		return (1);
*	else if (pw == 1)
*		return (base);
*	else
*	{
*		while (pw >= 0)
*	}
*
}
*/

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
	while (b[i] != '\0')
	{
		i++;
	}

	i--;
	while (i >= 0)
	{
		if (b[i] == '1')
		{
			sum = sum + ((b[i] - '0') * pow(2, i));
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		i--;
	}

	return (sum);
}
