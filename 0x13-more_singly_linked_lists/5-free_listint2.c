#include "lists.h"

/**
 * free_listint2 - frees a linked list, sets the head to NULL
 * @head: pointer to the head of the list
 *
 * Return: nth, void
 */
void free_listint2(listint_t **head)
{
	listint_t *nextNode;
	listint_t **temp = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			nextNode = *head;
			free(nextNode);
			*head = (*head)->next;
		}
		*temp = NULL;
	}
}