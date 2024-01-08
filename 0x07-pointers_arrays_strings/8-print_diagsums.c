#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 *
 * @a: int
 * @size: int
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	unsigned int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[i][j];
				sum2 = sum2 + a[i][size - 1 - j];
			}
		}
	}

	printf("%i, %i\n", sum1, sum2);
}
