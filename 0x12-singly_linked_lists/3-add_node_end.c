#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be stored in the enw node
 *
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *newNode = *head;

	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;
	}
	else
		return (NULL);
	if (newNode != NULL)
	{
		while (newNode->next != NULL)
			newNode = newNode->next;
		newNode->next = new;
	}
	else
		*head = new;
	return (new);
}
