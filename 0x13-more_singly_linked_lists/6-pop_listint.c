#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 *
 * @head: listint_t **
 *
 * Return: int (the head node’s data (n))
*/

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int i;

	if (*head = NULL)
	{
		return (0);
	}

	*head = (*head)->next;
	i = temp->n;
	free(temp);
	temp = NULL;

	return (i);
}
