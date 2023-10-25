#include "lists.h"

/**
 * pop_listint - This deletes the head node of a particular linked list.
 * @head: It is the pointer to the first element in the linked list.
 * Return: This is the data inside the elements that was deleted,
 * or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	if (!head || !*head)
	return (0);

	a = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (a);
}
