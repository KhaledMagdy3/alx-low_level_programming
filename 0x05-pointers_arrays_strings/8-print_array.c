#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array
 *
 * @a: integer
 * @n: intager
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
