#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: dlistint_t *
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next
		free(temp);
	}

	free(head);
}
