#include <stdio.h>
/**
  * main - prints all numbers in hexadecimal
  * Return: Always 0 (Success)
*/
int main(void)
{
int i = 48; /* 48: decimal repo of 0*/


while (i <= 102) /* 102: decimal repo of f*/
{
putchar(i);
/* after 9 we jump till 96; */
if  (i == 57) /* 57: decimal repo of 9*/
i += 38;
i++;
}
return (0);
}
