#include "lists.h"

/**
 * listint_len - prints out the number of elements
 * @h: main header or linked list starter pointer
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *tmp = NULL;

	if (h == NULL)
	{
		return (0);
	}
	tmp = h;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
