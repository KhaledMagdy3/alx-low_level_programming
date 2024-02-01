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
	int i;

	ptr = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		i++;
	}

	temp->str = strdup(str);
	temp->next = NULL;
	temp->len = i;

	if (ptr == NULL)
	{
		ptr = temp;
		return (temp);
	}
	else
	{
		while (ptr != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (temp);

}
