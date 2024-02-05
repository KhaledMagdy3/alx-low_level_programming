#include "lists.h"

/**
 * listint_len - function returns the number of elements in a linked list
 *
 * @h: const listint_t (linked list)
 *
 * Return: (size_t) the number of elements
*/

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
