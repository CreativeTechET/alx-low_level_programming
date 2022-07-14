#include "lists.h"

/**
 * print_list - function to count and print length and data of the nodes
 * @h: head of the linked list
 * Return: unsigned int number of the nodes
 */

size_t print_list(const list_t *h)
{

	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
			h = h->next;
			count++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
