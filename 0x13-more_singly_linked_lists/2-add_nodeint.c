#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 *
 * @head: listint_t **
 * @n: const int
 *
 * Return: listint_t (linked list)
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
