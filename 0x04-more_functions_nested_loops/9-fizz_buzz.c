#include <stdio.h>
/**
 * main - print fizz and numbers and Buzz
 *
 * Return: the result of the operation
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 != 0) && (i % 5 != 0))
{
printf("%d",i);
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else
{
printf("Buzz");
}
printf(" ");
}
printf("\n");
return (0);
}
