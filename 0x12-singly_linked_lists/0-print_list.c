#include "main.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @h: pointer to list_t
 *
 * Return: size_t
*/



size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	list_t *ptr = NULL;

	ptr = h;
	ptr->len = 0;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nill)");
		}
		else
		{
			while (*(ptr->str) != '\0')
			{
				i++;
			}

			printf("[%d] (%s)\n", i, ptr->str);
		}
		(ptr->len)++;
		ptr = ptr->next;
	}
	return (ptr->len);
}
