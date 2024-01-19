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
 * string_nconcat - function that concatenates two strings
 *
 * @s1: char
 * @s2: char
 * @n: unsigned int
 *
 * Return: char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int  i, j, x, y;
	char *m;

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

	if (n > y)
	{
		n = y;
	}
	m = (char *)malloc((i * sizeof(char)) + ((n + 1) * sizeof(char)));

	if (m == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		m[j] = s1[j];
	}
	for (x = i; x < (i + n); x++)
	{
		m[x] = s2[x - i];
	}
	m[x] = '\0';
	return (m);
}
