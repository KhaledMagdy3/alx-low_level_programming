#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes node at index of a linked list
 *
 * @head: listint_t **
 * @index: unsigned int
 *
 * Return: (int) 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	current = *head;
	previous = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		for (i = 0; (i < (index)) && (current != NULL); i++)
		{
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
		return (1);

		if ((current == NULL) || (current->next == NULL))
		{
			return (-1);
		}
	}
}
