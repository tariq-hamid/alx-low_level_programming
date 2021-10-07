#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of the linked list
 *
 * Return: nth, void
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}
	}
}
