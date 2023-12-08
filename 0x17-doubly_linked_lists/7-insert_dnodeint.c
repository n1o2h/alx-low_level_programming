#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head of the list
 * @idx: the index of the new node
 * @n: the data of the new node
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *node;
	unsigned int i, count = 0;

	current = *h;
	while (current)
	{
		current = current->next;
		count++;
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (count)
	{
		if (idx == count)
			return (add_dnodeint_end(h, n));
		if (idx < count)
		{
			node = malloc(sizeof(dlistint_t));
			if (!node)
				return (NULL);
			node->n = n;
			current = *h;
			for (i = 0; i < idx; i++)
				current = current->next;
			node->prev = current->prev;
			node->next = current;
			current->prev->next = node;
			current->prev = node;
			return (node);
		}
	}
	return (NULL);
}
