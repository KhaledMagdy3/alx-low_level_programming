#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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

	i = 1;
	while (s1[i] != '\0')
	{
		i++;
	}
	y = 1;
	while (s2[y] != '\0')
	{
		y++;
	}

	array = (char *)malloc((i + y + 1) * sizeof(char));

	for (x = 0; x < i; x++)
	{
		array[x] = s1[x];
	}
	for (z = 0; z < (i + y); z++)
	{
		array[x + z] = s2[z];
	}

	return (array);
}
