#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: the head of the list
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (!head)
		return;
	while (head)
	{
		current = head;
		head = (head)->next;
		free(current);
	}
}

