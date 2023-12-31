#include "lists.h"

/**
 * add_nodeint_end - This adds a node at the end of the linked list.
 * @head: this is the pointer to the first element of the list.
 * @n: This is the data to be  inserted in the new element.
 * Return: This is the pointer to the new node, or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new;

return (new);
}
