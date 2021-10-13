#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements in the passed to listint_len
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *nextNode = h;
	size_t count = 0;

	while (nextNode != NULL)
	{
		count += 1;
		nextNode = nextNode->next;
	}
	return (count);
}
