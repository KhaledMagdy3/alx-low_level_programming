#include "lists.h"

/**
 * dlistint_len - function that returns
 * the number of elements in a linked dlistint_t list
 * @h: const dlistint_t *
 * Return: the number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int num = 0;

	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}

	return (num);
}
