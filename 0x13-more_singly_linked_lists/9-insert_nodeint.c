#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index of the node to be inserted
 * @n: content of the new node
 *
 * Return: the address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = NULL;
	listint_t *preNode = NULL;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL || idx > listint_len(*head))
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				newNode->next = *head;
				*head = newNode;
				return (newNode);
			}
			newNode->next = preNode->next;
			preNode->next = newNode;
			return (newNode);
		}
		else if ((i + 1) == idx)
			preNode = *head;
		head = &((*head)->next);
		i++;
	}
	return (NULL);
}

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
