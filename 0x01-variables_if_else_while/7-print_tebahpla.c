#include <stdio.h>
/**
  * main - prints all alphabet in reverse
  * Return: Always 0 (Success)
*/
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
printf("\n");

return (0);
}
