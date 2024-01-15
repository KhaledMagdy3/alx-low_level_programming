#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid -  function that returns a pointer to a 2 dimensional array
 *
 * @width: int
 * @height: int
 *
 * Return: int
*/

int **alloc_grid(int width, int height)
{
	int *array;
	int i, x;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = (int *)malloc(height * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (x = 0; x < width; x++)
			{
				free(array[x]);
			}
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (x = 0; x < width; x++)
		{
			array[i][x] = 0;
		}
	}

	return (array);
}
