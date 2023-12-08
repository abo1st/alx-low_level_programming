#include "lists.h"

/**
 * get_dnodeint_at_index - It returns the nth node of a dlistint_t linked list.
 * @head: This is the pointer to head of the list.
 * @index: This is the index of the node to search for, starting from 0.
 * Return: nth node or null.
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int sizez;
	dlistint_t *tmp;

	sizez = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == sizez)
	return (tmp);
	sizez++;
	tmp = tmp->next;
	}
	return (NULL);
}
