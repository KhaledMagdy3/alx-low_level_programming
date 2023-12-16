#include <stdio.h>
/**
 * main - Entry point
 *
 * combination 3 digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
			putchar('0' + x);
			putchar('0' + y);
			putchar('0' + z);
			if (x < 7 || y < 8 || z < 9)
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
	}
	putchar(' ');
	return (0);
}
