#include "lists.h"

/**
 * delete_dnodeint_at_index - inserts a new node at a given position
 * @head: the head of the list
 * @index: the index of the new node
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i, count = 0;

	current = *head;
	while (current)
	{
		current = current->next;
		count++;
	}
	if (*head)
	{
		current = *head;
		if (index == 0)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(current);
			return (1);
		}
		if (index == count - 1)
		{
			while (current->next)
				current = current->next;
			current->prev->next = NULL;
			free(current);
			return (1);
		}
		if (index < count - 1 && index > 0)
		{
			for (i = 0; i < index; i++)
				current = current->next;
			current->prev->next = current->next;
			current->next->prev = current->prev;
			free(current);
			return (1);
		}
	}
	return (-1);
}
