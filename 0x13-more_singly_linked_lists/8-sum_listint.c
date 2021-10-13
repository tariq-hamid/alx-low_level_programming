#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of the list
 *
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	listint_t *nextNode = head;
	size_t sum = 0;

	while (nextNode != NULL)
	{
		sum += nextNode->n;
		nextNode = nextNode->next;
	}
	return (sum);
}