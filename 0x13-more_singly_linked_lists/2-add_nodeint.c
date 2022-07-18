#include "lists.h"
/**
 * add_nodeint - add a new node in the beggining
 * @head: pointer to the head of the linked list
 * @n: data to add to the node
 * Return: the memory address of the new linked list head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	new->next = *head;
	*head = new;
	return (*head);
}
