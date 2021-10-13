#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *nextNode = h;
	size_t count = 0;

	while (nextNode != NULL)
	{
		printf("%d\n", nextNode->n);
		count += 1;
		nextNode = nextNode->next;
	}
	return (count);
}
