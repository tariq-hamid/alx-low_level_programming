#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_ - linked list type
 * @str: string - string to be stored in the node
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_
{
	char *str;
	unsigned int len;
	struct list_ *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
