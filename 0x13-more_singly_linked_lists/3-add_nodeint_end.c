#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * @head: head of the list
 * @n: the data to save to the list
 * Return: the address of the new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = NULL;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (new);
}

