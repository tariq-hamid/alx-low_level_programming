#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_ - singly linked list structure
 * @n: integer, to be stored
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_
{
	int n;
	struct listint_ *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
