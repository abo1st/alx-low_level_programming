#include "lists.h"

/**
 * free_listint - This frees the specific linked list.
 * @head: listint_t This is the particular list to be freed.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}

