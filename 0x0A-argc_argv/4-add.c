#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints its name
 *
 * @argc: int
 * @argv: char
 *
 * Return: int
*/

int main(int argc, char *argv[])
{
	int i, x = 0;

	if (argc < 1)
	{
		printf("0\n");
        return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			x = x + atoi(argv[i]);
		}
		printf("%d\n", x);

		return (0);
	}
}
