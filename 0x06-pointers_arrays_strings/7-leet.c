#include <stdio.h>
#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @a: char
 *
 * Return: char
 */

char *leet(char *a)
{
	int i, j;
	char sml[] = {'a', 'e', 'o', 't', 'l'};
	char cap[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i] == sml[j] || a[i] == cap[j])
			{
				a[i] = num[j];
			}
		}
	}

	return (a);
}
