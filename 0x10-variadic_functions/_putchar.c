#include "main.h"
#include <unistd.h>

/**
 * _putchar - writesvthe character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * 	   on error. -1 is returned. and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}