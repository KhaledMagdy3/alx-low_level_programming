#include <stdio.h>
/**
 * main - Entry point
 *
 * numbers with , and space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
	putchar('0' + n);
	if (n < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}
