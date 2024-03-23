#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 *  at index index of a dlistint_t linked list.
 * @head: dlistint_t **
 * @index: unsigned int
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *count = *head;
	unsigned int size = 0;
	unsigned int x = 0;

	while (count != NULL)
	{
		size++;
	}

	if (index > size)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		return (1);
	}
	else if (index == size)
	{
		count = NULL;
		(count->prev)->next = NULL;
		return (1);
	}

	while (x < index)
	{
		temp = temp->next;
		x++;
	}
	temp = NULL;
	(temp->prev)->next = temp->next;
	(temp->next)->prev = temp->prev;
	free(temp);
	return (1);
}
