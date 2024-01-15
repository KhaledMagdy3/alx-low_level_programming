#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars
 *
 * @size: int
 * @c: char
 *
 * Return: char
*/

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return ('\0');
	}

	char *array = (char *)malloc(size * sizeof(char));

	if (array == '\0')
	{
		return ('\0');
	}

	int i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
