#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: listint_t (linked list)
 *
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *nextn;

	while (current != NULL)
	{
		nextn = current->next;
		free(current);
		current = nextn;
	}
}
