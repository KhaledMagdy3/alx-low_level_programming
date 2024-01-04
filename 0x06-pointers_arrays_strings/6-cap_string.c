#include <stdio.h>
#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @a: char
 *
 * Return: char
 */

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] == ' ') && (a[i + 1] <= 122) && (a[i + 1] >= 97))
			a[i + 1] = a[i + 1] - 32;
	}

	return (a);
}
