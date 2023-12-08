#include "lists.h"

/**
 * *get_dnodeint_at_index -  returns the nth node of a list
 * @head: the head of the list
 * @index: the index of the node
 * Return: the address of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0, i;

	current = head;
	while (current)
	{
		current = current->next;
		count++;
	}
	if (index < count)
	{
		current = head;
		for (i = 0; i < index; i++)
			current = current->next;
		return (current);
	}
	return (NULL);
}
