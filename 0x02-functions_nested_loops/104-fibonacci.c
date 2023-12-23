#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 3;
	unsigned long int first = 1;
	unsigned long int second = 2;
	unsigned long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (i <= 98)
	{
		if (i == 98)
		{
			printf("%lu\n", next);
		}
		else
		{
			printf("%lu, ", next);
		}

		first = second;
		second = next;
		next = first + second;
		i++;
	}
	return (0);
}
