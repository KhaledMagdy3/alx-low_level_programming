#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *m;
	unsigned int i;

	m = (unsigned int *)malloc(nmemb * size);

	if ((m == NULL) || (nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		m[i] = 0;
	}
	return (m);
}
