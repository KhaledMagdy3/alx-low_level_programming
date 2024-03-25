#include <stdio.h>
#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: char
 * @accept: char
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;

	for (; *s != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				i++;
			}
		}
	}

	return (i);
}
