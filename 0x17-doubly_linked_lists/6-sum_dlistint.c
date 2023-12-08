#include "lists.h"

/**
 * sum_dlistint - This returns the sum of all the data (n)
 * of a doubly linked list.
 * @head: This is the head of the list.
 * Return: This is the sum of the data.
 */

int sum_dlistint(dlistint_t *head)
{
	int sumz;

	sumz = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sumz += head->n;
			head = head->next;
		}
	}

	return (sumz);
}
