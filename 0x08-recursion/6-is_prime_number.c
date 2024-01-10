#include <stdio.h>
#include "main.h"

/**
 *is_prime_number_guess - function helps
 *
 *@n: int
 *@i: int
 *
 * Return: int
 */

int is_prime_number_guess(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_number_guess(n, i + 1));
}

/**
 * is_prime_number - function that returns 1 if the input prime
 *
 * @n: int
 *
 * Return: int
 */

int is_prime_number(int n);
{
	return (is_prime_number_guess(n, 2));
}
