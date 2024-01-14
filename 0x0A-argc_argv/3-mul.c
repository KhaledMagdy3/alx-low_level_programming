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
	int i, x = 1;

	if (argc != 3)
	{
		printf("error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			x = x * atoi(argv[i]);
		}
		printf("%i\n", x);

		return (0);
	}
}
