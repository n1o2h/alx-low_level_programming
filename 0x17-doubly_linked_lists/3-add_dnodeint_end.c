#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end
 * @head: the head of the list
 * @n: the data of the new node
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (!*head)
		*head = node;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = node;
		node->prev = current;
	}
	return (node);
}
