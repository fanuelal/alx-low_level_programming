#include "holberton.h"
#include <stdio.h>
/**
 * main - print fizz and numbers and Buzz
 *
 * Return: 0 Always
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 != 0 && i % 5 != 0)
{
printf("%d", i);
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("Fizz");
}
printf(" ");
}
printf("\n");
return (0);
}
