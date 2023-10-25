#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - This counts the number of unique nodes available.
 * in a looped listint_t This is the linked list.
 * @head: This is the  pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t a = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
	if (tortoise == hare)
	{
	tortoise = head;
	while (tortoise != hare)
	{
	a++;
	tortoise = tortoise->next;
	hare = hare->next;
	}

	tortoise = tortoise->next;
	while (tortoise != hare)
	{
	a++;
	tortoise = tortoise->next;
	}

	return (a);
	}

	tortoise = tortoise->next;
	hare = (hare->next)->next;
	}

	return (0);
	}

/**
 * print_listint_safe - This prints a listint_t list safely.
 * @head: It is a pointer to the head of the listint_t list.
 * Return: This is the total  number of nodes in the list.
 */
	size_t print_listint_safe(const listint_t *head)
{
	size_t a, index = 0;

	a = looped_listint_len(head);

	if (a == 0)
	{
	for (; head != NULL; a++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}

	else
	{
	for (index = 0; index < a; index++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (a);
}
