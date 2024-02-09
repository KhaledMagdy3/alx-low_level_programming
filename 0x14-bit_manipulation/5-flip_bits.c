#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 *
 * @n: unsigned long int (no.1)
 * @m: unsigned long int (no.2)
 *
 * Return: returns the number of bits you would need to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int count;
	unsigned long int check;

	count = 0;
	check = n ^ m;

	for (i = 0; i <= 64; i++)
	{
		if ((check & 1) != 0)
		{
			count++;
		}
		check = check >> 1;
	}

	return (count);
}
