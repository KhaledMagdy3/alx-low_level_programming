#include <stdio.h>
#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: char
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char temp;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (int j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}
}
