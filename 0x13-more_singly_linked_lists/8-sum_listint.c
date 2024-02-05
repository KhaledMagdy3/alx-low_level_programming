#include "lists.h"

/**
 * sum_listint - function returns the sum of all the data (n) of a linked list
 *
 * @head: listint_t
 *
 * Return: int (sum of data)
*/

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
	{
		return (0);
	}

	while (temp->next != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	sum = sum + temp->n;

	return (sum);
}
