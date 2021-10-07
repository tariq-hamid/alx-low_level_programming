#include "lists.h"

/**
 * print_list - print elements of a linked list
 * @h: head of the linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *nextNode = h;
	size_t count = 0;

	while (nextNode != NULL)
	{
		if (nextNode->str != NULL)
			printf("[%d] %s\n", nextNode->len, nextNode->str);
		else
			printf("[0] (nil)\n");
		count += 1;
		nextNode = nextNode->next;
	}
	return (count);
}
