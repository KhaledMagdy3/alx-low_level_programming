#include <stdio.h>
#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n: int
 *
 * Return: int
 */

int factorial(int n)
{
	factorial(0) = 1;
	if (n >= 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
