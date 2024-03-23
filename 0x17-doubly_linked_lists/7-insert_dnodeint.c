#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 * @h: dlistint_t **
 * @idx: unsigned int
 * @n: int
 * Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *h;
	dlistint_t *count = *h;
	unsigned int size = 0;
	unsigned int x = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	while (count != NULL)
	{
		count = count->next;
		size++;
	}
	if (idx > size)
		return (NULL);

	else if (idx == size)
	{
		new_node = add_dnodeint_end(&h, n);
		return (new_node);
	}
	else if (idx == 0)
	{
		new_node = add_dnodeint(&h, n);
		return (new_node);
	}
	new_node->n = n;
	while (x < idx)
	{
		temp = temp->next;
		x++;
	}
	new_node->next = temp;
	new_node->prev = temp->prev;
	temp->prev = new_node;
	(temp->prev)->next = new_node;
	return (new_node);
}
