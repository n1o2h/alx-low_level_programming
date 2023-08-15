#include "main.h"

/**
 *print_alphabet_x10 - utilizes on the _putchar fuction to print
 * the alphabet a - z
*/

void print_alphabet_x10(void)
{
int ch, line;
for (line = 0; line <= 9; line++)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
}
