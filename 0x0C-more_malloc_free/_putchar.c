#include <unistd.h>

/**
 * _putchar - xrite the chararter c to stdout
 * @c: thz character to print
 * Return: on success 1
 * one error, -1 is returned ,and errno is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

