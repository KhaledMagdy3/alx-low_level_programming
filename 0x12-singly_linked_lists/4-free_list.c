#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 *
 * @head: list_t
 *
 * Return: void
*/

void free_list(list_t *head)
{
    while (head != NULL)
    {
        free(head->str);
        free(head->next);
        free(head);
    }
}