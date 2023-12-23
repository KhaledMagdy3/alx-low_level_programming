#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	long int first = 1;
	long int second = 2;
	long int next = first + second;
	long int sum = 2;

	while (next <= 4000000)
	{
		first = second;
		second = next;
		next = first + second;
		if ((next % 2) == 0)
		{
			sum = sum + next;
		}
		i++;
	}

	printf("%ld\n", sum);

	return (0);
}
