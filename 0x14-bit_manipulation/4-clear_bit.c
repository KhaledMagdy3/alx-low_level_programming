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
 * clear_bit -  function that sets the value of a bit to 0 at a given index
 *
 * @n: unsigned long int *
 * @index: unsigned int
 *
 * Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n = *n & ~(powr(2, index));

	return (1);
}
