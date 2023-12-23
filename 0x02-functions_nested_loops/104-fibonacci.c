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
	long long int first = 1;
	long long int second = 2;
	long long int next = first + second;

	printf("%lld, ", first);
	printf("%lld, ", second);

	while (i <= 98)
	{
		if (i == 98)
		{
			printf("%lld\n", next);
		}
		else
		{
			printf("%lld, ", next);
		}

		first = second;
		second = next;
		next = first + second;
		i++;
	}
	return (0);
}
