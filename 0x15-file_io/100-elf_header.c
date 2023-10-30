#include "main.h"
#include <elf.h>
#define USAGE "Usage: elf_header elf_filename\n"
#define NOT_OPEN "Error: Can't open the file: %s\n"
#define NOT_READ "Error: Can't read from the file: %s\n"
#define NOT_CLOSE "Error: Can't close the file: %d\n"

void print_osabi_more(Elf64_Ehdr h);

/**
 * print_magic - print ELF magic
 * @h: the ELF header
 * Return: void
 */

void print_magic(Elf64_Ehdr h)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", h.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * main - Entry point (program)
 * @ac: the number of arguments
 * @av: the arguments
 * Return: 1 or 0
 */
int main(int ac, char **av)
{
	int file;
	Elf64_Ehdr h;
	ssize_t b;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(97);
	}
	file = open(av[1], O_RDONLY);
	if (file == -1)
		dprintf(STDERR_FILENO, NOT_OPEN, av[1]), exit(98);
	b = read(file, &h, sizeof(h));
	if (b < 1 || b != sizeof(h))
		dprintf(STDERR_FILENO, NOT_READ, av[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L' &&
			h.e_ident[3] == 'F')
		printf("ELF header:\n");
	else
		dprintf(STDERR_FILENO, "Not ELF file : %s\n", av[1]), exit(98);
	print_magic(h);
	if (close(file))
		dprintf(STDERR_FILENO, NOT_CLOSE, file), exit(98);
	return (EXIT_SUCCESS);
}
