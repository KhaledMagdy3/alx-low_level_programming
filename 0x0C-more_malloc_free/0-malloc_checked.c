#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: unsigned int
 *
 * Return: void
*/

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}

	return (m);
}
