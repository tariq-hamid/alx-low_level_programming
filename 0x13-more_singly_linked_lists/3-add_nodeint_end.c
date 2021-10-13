#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head of the list
 * @n: number to be stored
 *
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *nextNode = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
	}
	else
		return (NULL);
	if (nextNode != NULL)
	{
		while (nextNode->next != NULL)
			nextNode = nextNode->next;
		nextNode->next = newNode;
	}
	else
		*head = new_node;
	return (new_node);
}
