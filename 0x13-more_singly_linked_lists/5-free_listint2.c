#include "lists.h"
/**
 * free_listint2 - free's the allocated memory
 * @head: head of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
		*head = NULL;
	}
}
