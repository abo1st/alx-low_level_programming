#include "lists.h"

/**
 * free_listint_safe - This frees a linked list.
 * @h: It is the pointer to the first node in the linked list.
 * Return: This is the number of elements in the freed list.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t a = 0;
	int b;
	listint_t *temp;

	if (!h || !*h)
	return (0);

	while (*h)
	{
	b = *h - (*h)->next;
	if (b > 0)
	{
	temp = (*h)->next;
	free(*h);
	*h = temp;
	a++;
	}
	else
	{
	free(*h);
	*h = NULL;
	a++;
	break;
	}
	}

	*h = NULL;

	return (a);
}
