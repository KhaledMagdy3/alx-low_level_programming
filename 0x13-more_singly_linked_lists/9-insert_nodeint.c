#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts anew node at given position
 *
 * @head: listint_t **
 * @idx: unsigned int
 * @n: int
 *
 * Return: listint_t (linked list)
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *ptr;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	ptr = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		ptr = ptr->next;
	}

	temp->next = ptr->next;
	ptr->next = temp;

	return (temp);
}
