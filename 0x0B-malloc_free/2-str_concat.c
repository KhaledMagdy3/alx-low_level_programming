#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * len - length of string
 *
 * @s: char
 *
 * Return: int
*/

int len(char *s)
{
	int i;

	i = 1;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: char
 * @s2: char
 *
 * Return: char
*/

char *str_concat(char *s1, char *s2)
{
	char *array;
	int i, x, y, z;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = len(s1);
	y = len(s2);
	array = (char *)malloc((i + y + 1) * sizeof(char));

	for (x = 0; x < i; x++)
	{
		if (array == NULL)
		{
			return (NULL);
		}
		array[x] = s1[x];
	}
	for (z = 0; z < (i + y); z++)
	{
		if (array == NULL)
		{
			return (NULL);
		}
		array[x + z] = s2[z];
	}

	return (array);
}
