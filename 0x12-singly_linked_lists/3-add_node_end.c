#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 *
 * @head: list_t
 * @str: string
 *
 * Return: list_t
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	int i = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	temp->str = strdup(str);
	temp->next = NULL;
	temp->len = i;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
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
