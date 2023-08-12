#include <stdio.h>
/**
  * main - prints all alphabet with out q and e
  * Return: Always 0 (Success)
*/

int main(void)
{
char ch = 'a';
while (ch != 'q' || ch != 'e')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
