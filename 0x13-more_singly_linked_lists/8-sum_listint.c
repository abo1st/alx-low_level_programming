#include "lists.h"

/**
 * sum_listint - cIt alculates the sum of all the data in a listint_t list.
 * @head: This is the first node in the linked list.
 * Return: This is the resulting sum.
 */

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp = head;

	while (temp)
	{
	total += temp->n;
	temp = temp->next;
	}

	return (total);
}
