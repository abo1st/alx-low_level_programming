#include "lists.h"

/**
 * listint_len - This returns the number of elements in a linked lists.
 * @h: This is the linked list of type listint_t to traverse.
 * Return:this is the  number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
	a++;
	h = h->next;
	}

	return (a);
}
