#include "lists.h"

/**
 * add_nodeint_end - function adds a new node at the end of a listint_t list
 *
 * @head: listint_t **
 * @n: const int (head->n)
 *
 * Return: listint_t (linked list)
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}

		ptr->next = temp;
	}

	return (temp);
}
