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
	unsigned int i;

	i = 0;

	for (; *s != '\0'; s++)
	{
		for (; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				i++;
			}
		}
	}

	return (i);
}
