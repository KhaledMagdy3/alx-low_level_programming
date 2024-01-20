#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: void
 * @old_size: inunsigned int
 * @new_size: inunsigned int
 *
 * Return: void
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;

	m = ptr;
	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	else if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	ptr = malloc(new_size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr = m;

	return (ptr);
}
