#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of
 *  all the data (n) of a dlistint_t linked list.
 * @head: dlistint_t *
 * Return: the sum (int)
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
