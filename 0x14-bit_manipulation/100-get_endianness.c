#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: void
*/

int get_endianness(void)
{
	unsigned int num = 1;
	char *byt = (char *)&num;

	return ((int)(*byt));
}
