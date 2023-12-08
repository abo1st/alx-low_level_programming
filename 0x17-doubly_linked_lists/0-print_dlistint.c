#include "lists.h"

/**
 * print_dlistint - This prints all the elements of a
 * dlistint_t list.
 * @h: This is the head of the list.
 * Return: This is the  number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int countz;

	countz = 0;

	if (h == NULL)
		return (countz);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		countz++;
		h = h->next;
	}

	return (countz);
}
