#include <stdio.h>
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
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
