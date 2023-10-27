#include "main.h"

/**
 * get_bit - returns the value of a but at a given index
 * @n: the number
 * @index: the index
 * Return: 0 or 1 or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
			return (-1);
	if (n & (1 << index))
		return (1);
	return (0);
}
