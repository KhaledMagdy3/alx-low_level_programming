#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 *  of a dlistint_t linked list
 * @head: dlistint_t *
 * @index: unsigned int
 * Return: the nth node of a dlistint_t linked list
 * if the node does not exist, return NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	dlistint_t *count = head;
	unsigned int size = 0;
	unsigned int x = 0;

	while (count != NULL)
	{
		count = count->next;
		size++;
	}

	if (index > size)
	{
		return (NULL);
	}

	while (x < index)
	{
		temp = temp->next;
		x++;
	}

	return (temp);
}
