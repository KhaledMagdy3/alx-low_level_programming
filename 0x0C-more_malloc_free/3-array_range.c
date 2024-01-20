#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers.
 *
 * @min: int
 * @max: int
 *
 * Return: int
*/

int *array_range(int min, int max)
{
	int i, x;
	int *m;

	x = (max - min) + 1);
	if (min > max)
	{
		return (NULL);
	}

	m = (int *)malloc(x * sizeof(int));
	if (m == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < x; i++)
	{
		m[i] = min + i;
	}

	return (m);
}
