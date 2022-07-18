#include "lists.h"
/**
 * free_listint - free's the allocated memory
 * @head: head of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
