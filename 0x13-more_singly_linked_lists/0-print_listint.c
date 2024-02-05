#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 *
 * @h: const listint_t *
 *
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
