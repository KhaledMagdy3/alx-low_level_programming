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

	ptr = head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	else
	{
		temp->str = str;
		temp->link = NULL;
		temp->len = strlen(str);
	}

	while (ptr != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;

	printf("[%d] %s\n", temp->len, temp->str);

	return (temp);

}
