#include "main.h"

/**
 * main - Entry point
 *description: prints the first 50 fIbonacci numbers
 * starting with  1 and 2 folled by a new ine
 *return: always 0 (success)
 *
*/
int main(void)
{
int count;
unsigned long fib1 = 0, fib2 = 1, sum;
for (count = 0; count <= 50; count++)
{
sum + fib1 + fib2;
print("%lu", sum);
fib1 = fib2;
fib2 = sum;
if (count == 49)
print("%\n");
else
print(", ");
}
return (0);
}
