#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning
 * @head: the header
 * @n: the data of the new node
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (!head || !*head)
	{
		*head = node;
		node->next = NULL;
		node->prev = NULL;
	}
	else
	{
		node->next = *head;
		node->prev = NULL;
		(*head)->prev = node;
		*head = node;
	}
	return (node);
}
