#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *
 * @head: listint_t **
 *
 * Return: void
*/

void free_listint2(listint_t **head)
{
	if ((head == NULL) || (*head == NULL))
	{
		return;
	}

	listint_t *current = *head;
	listint_t *nextn;

	while (current != NULL)
	{
		nextn = current->next;
		free(current);
		current = nextn;
	}

	*head = NULL;
}
