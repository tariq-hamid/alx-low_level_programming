#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: head of the list
 *
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *nextNode = h;
	size_t count = 0;

	while (nextNode != NULL)
	{
		count += 1;
		nextNode = nextNode->next;
	}
	return (count);
}
