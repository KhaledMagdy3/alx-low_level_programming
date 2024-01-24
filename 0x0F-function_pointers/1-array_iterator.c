#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function executes a function given a parameter
 *
 * @array: int
 * @size: size
 * @action: function pointer take int & return void
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
