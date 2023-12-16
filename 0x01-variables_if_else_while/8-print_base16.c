#include <stdio.h>
/**
 * main - Enter point
 *
 * hexadicemel
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, ch;

	for (n = 0; n < 10; n++)
	{
	putchar('0' + n);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	}

	putchar('\n');

	return (0);
}
