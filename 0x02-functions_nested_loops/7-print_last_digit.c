#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: integer
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	int ld = (n % 10);

	if (ld < 0)
	{
		ld = (ld * -1);
	}

	_putchar(ld + '0');

	return (ld);
}
