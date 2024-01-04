#include <stdio.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
