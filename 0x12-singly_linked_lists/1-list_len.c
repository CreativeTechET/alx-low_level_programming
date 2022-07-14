#include "lists.h"

/**
 * list_len - function to print out the number of elements
 * @h: linked ist head
 * Return: the number of element
 */

size_t list_len(const list_t *h)
{
	int count;

	count = 0;
	while (h != 0)
	{
		h = h->next;
		count++;
	}
	return (count);
}
