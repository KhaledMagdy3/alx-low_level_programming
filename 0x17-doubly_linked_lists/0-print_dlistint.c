include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: const dlistint_t *
 * Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		size++;
		h = h->next;
	}

	return (size);
}
