#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function
 *
 * @s: char operator passed as argument
 *
 * Return: int
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if ((strcmp(s, ops[i].op)) == 0)
		{
			return (ops[i].f);
		}
	}

	return (0);
}
