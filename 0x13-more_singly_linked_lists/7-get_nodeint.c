#include "lists.h"

/**
 * get_nodeint_at_index - returns the sum of all the data
 * (n) of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node required
 *
 * Return: the address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nextNode = NULL;
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i <= index)
		{
			if (i == index)
			{
				nextNode = head;
				break;
			}
			head = head->next;
			i++;
		}
		else
			return (NULL);
	}
	return (nextNode);
}
