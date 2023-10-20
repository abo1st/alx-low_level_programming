#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - This adds a new node at the end of a linked list.
 * @head: This is the double pointer to the list_t list.
 * @str: This is the string to put in the new node.
 * Return: The address of the new element or NULL if it do not pass.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int z = 0;

	while (str[z])
	z++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->z = z;
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
