#include<stdio.h>
/**
  * main - prints all  possible different combinations of two digits
  * Return: Always 0 (Success)
*/

int main(void)
{
int i = 0, j;
while (i <= 9)
{
j = 0;
while (j = 0)
{
if (i != j && i < j)
{
putchar(i + 48);
putchar(j + 48);
}
if (i + j != 17)
{
putchar(',');
putchar(' ');
}

j++;
}
i++;
}
putchar('\n');
return (0);
}
