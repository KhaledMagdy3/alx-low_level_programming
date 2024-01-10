#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 *@s: char
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 1;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	else
	{
		return (i);
	}
}
