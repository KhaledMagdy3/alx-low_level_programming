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
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		while (a[i] == 'a' || a[i] == 'A')
			a[i] = '4';
		while (a[i] == 'e' || a[i] == 'E')
			a[i] = '3';
		while (a[i] == 'o' || a[i] == 'O')
			a[i] = '0';
		while (a[i] == 't' || a[i] == 'T')
			a[i] = '7';
		while (a[i] == 'l' || a[i] == 'L')
			a[i] = '1';
	}

	return (a);
}
