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
    (void)argc;
    printf("%s\n", argv[0]);
    return (0);
}