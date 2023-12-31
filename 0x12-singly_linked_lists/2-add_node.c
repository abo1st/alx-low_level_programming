#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - This adds a new node at the beginning of a linked list.
 * @head: The double pointer to the list_t list.
 * @str: This is the new string to add in the node.
 * Return: This is the address of the new element, or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int z = 0;

	while (str[z])
	z++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->z = z;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
