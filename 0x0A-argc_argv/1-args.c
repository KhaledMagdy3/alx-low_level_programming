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
	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);
}
