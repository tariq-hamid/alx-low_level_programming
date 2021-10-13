#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the head of the linked list
 * @n: integer to be stored
 *
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		newNode->next = *head;
	*head = newNode;
	return (newNode);
}
