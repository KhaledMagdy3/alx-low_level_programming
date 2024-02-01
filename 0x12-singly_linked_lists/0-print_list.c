#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @h: pointer to list_t
 *
 * Return: size_t
*/



size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
