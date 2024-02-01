#include "lists.h"

/**
 * add_node - function that adds a new node at the begining
 *
 * @head: list_t
 * @str: string
 *
 * Return: list_t
*/

list_t *add_node(list_t **head, const char *str);
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

        temp->next = ptr;
		ptr = temp;
	}
	return (ptr);
}
