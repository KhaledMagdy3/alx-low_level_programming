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

	i = 1;
	while (str[i] != NULL)
	{
		i++;
	}

	str = (char *)malloc(i * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	return (str);
}
