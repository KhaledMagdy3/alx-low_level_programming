#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space
 *
 * @str: char
 *
 * Return: char
*/

char *_strdup(char *str)
{
	char *array;
	int i;
	int x;

	i = 1;
	while (str[i] != '\0')
	{
		i++;
	}

	array = (char *)malloc(i * sizeof(char));

	for (x = 0; x < i; x++)
	{
		if (array == NULL)
		{
			return (NULL);
		}
		array[x] = str[x];
	}

	return (array);
}
