#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 *  at the end of a dlistint_t list.
 * @head: dlistint_t **
 * @n: const int
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	while (*head != NULL)
	{
		(*head) = (*head)->next;
	}

	new_node->prev = *head;
	(*head)->next = new_node;

	return (new_node);
}
