#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion_guess - function helper
 *
 * @n: int
 * @i: int
 *
 * Return: int
 */

int _sqrt_recursion_guess(int n, int i)
{
	int s = i * i;

	if (s == n)
	{
		return (i);
	}
	else if (s < n)
	{
		return (_sqrt_recursion_guess(n, i + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root
 *
 * @n: int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_recursion_guess(n, 0));
}
