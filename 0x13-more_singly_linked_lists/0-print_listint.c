#include "lists.h"

/**
 * print_listint - prints every member of the linked list
 * @h: head pointer to the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{

	size_t count = 0;
	const listint_t *tmp;

	if (h == NULL)
	{
		return (-1);
	}
	tmp = h;
	while (tmp != NULL)
	{
		count++;
		putchar(tmp->n + '0');
		putchar('\n');
		tmp = tmp->next;

	}
	return (count);
}
