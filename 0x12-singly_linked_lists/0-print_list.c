#include "lists.h"

/**
 * print_list - function to count and print length and data of the nodes
 * @h: head of the linked list
 * Return: unsigned int number of the nodes
 */

size_t print_list(const list_t *h)
{

	const list_t *tmp;
	tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		if (h->str == NULL)
		{
                	printf("[%d] (nil)\n", 0);
			tmp = tmp->next;
			count++;
		}
		int len = strlen(tmp->str);
		printf("[%d] %s", len, tmp->str);
		tmp = tmp->next;
		count++;

		printf("\n");
	}
	return (count);
}
