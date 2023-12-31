#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a peculiar index in a linked list
 * @head: This is the first node in the linked list.
 * @index: This is the index of the node to return.
 * Return: This is the pointer to the node that is being looked for, or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
	temp = temp->next;
	a++;
	}

	return (temp ? temp : NULL);
}
