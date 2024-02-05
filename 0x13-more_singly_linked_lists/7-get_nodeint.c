#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node of a linked list
 *
 * @head: listint_t *
 * @index: unsigned int
 *
 * Return: listint_t (linked list)
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;

	for (i = 0; i < index; i++)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}

		ptr = ptr->next;
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
