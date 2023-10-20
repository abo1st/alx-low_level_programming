#ifndef _LISTS_
#define _LISTS_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - This is the singly linked list.
 * @str: string - (The malloc'ed string).
 * @len: The length of the string.
 * @next: This points to the next node.
 * Description: The singly linked list node structure.
 */

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif
