#include "lists.h"

/**
 * print_listint - This prints all the elements of a linked list.
 * @h: This is the linked list of type listint_t to print.
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
	printf("%d\n", h->n);
	a++;
	h = h->next;
	}

	return (a);
}
