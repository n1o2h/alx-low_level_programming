#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the number
 * @index: the index
 * Return: an integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(size_t) * 8)
		return (-1);
	if ((*n >> index) & 1)
		*n -= (1 << index);
	return (1);
}
