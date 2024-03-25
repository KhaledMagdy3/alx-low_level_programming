#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - function that copies the string
 *
 * @dest: char
 * @src: char
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}