#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - to add 2 num
 *
 * @a: int
 * @b: int
 *
 * Return: int
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - to sub 2 num
 *
 * @a: int
 * @b: int
 *
 * Return: int
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - to mul 2 num
 *
 * @a: int
 * @b: int
 *
 * Return: int
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - to div 2 num
 *
 * @a: int
 * @b: int
 *
 * Return: int
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - to sub 2 num
 *
 * @a: int
 * @b: int
 *
 * Return: int
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
