#include "lists.h"

/**
 * print_listint - prints every member of the linked list
 * @h: head pointer to the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{

	size_t count = 0;
		if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h)
		{
			count++;
			printf("%d\n", h->n);
			h = h->next;

		}
	}
	return (count);
}
