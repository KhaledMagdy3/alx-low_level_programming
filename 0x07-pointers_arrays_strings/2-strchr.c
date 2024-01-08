#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: char
 * @c: char
 *
 * Return: pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}

	return (NULL);
}
