#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of the list
 * @head: the head of the list
 * Return: the sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head)
	{
		current = head;
		while (current)
		{
			sum += current->n;
			current = current->next;
		}
	}
	return (sum);
}
