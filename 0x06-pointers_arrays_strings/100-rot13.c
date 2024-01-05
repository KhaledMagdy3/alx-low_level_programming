#include <stdio.h>
#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 *
 * @a: char
 *
 * Return: char
 */

char *rot13(char *a)
{
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] >= 65 && a[i] <= 77) || (a[i] >= 97 && a[i] <= 109))
		{
			a[i] = a[i] + 13;
		}

		j = 0;

		while ((a[i] >= 78 && a[i] <= 90 || (a[i] >= 110 && a[i] <= 122)) && j == 0)
		{
			a[i] = a[i] - 13;
			j++;
		}
	}

	return (a);
}
