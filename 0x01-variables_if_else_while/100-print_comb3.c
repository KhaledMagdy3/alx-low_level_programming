#include <stdio.h>
/**
 * main - Entry point
 *
 * combination two num
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m;

	n = 0;
	m = 1;
	while(n <= 9 && m <= 9)
	{
	if(n != m)
	{	
	putchar('0' + m);
	putchar('0' + n);
	putchar(',');
	putchar(' ');
	}
	continue;
	}

	return (0);
}
