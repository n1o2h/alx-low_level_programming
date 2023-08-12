#include <stdio.h>
/**
  * main - prints all alphabet letters and  in uppercase
  * Return: Always 0 (Success)
*/
int main(void)
{
char ch = 'a';
char  Ch = 'A';
/* prints a - z*/
while (ch <= 'z')
{
	putchar(ch);
ch++;
}

/* prints A - Z*/

while (Ch <= 'Z')
{
putchar(Ch);
Ch++;
}

putchar('\n');
return (0);
}
