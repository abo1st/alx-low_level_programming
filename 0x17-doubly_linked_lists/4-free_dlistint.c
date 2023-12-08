#include "lists.h"

/**
 * free_dlistint - This frees a dlistint_t list.
 * @head: This is the pointer to head of the list.
 * Return: nothing.
 **/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
