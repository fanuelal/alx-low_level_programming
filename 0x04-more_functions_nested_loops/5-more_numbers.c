#include "holberton.h"

/**
 * print_numbers - multiplies two integers
 *
 * Return: the result of the operation
 */
void print_numbers(void)
{
int i, j = 0;
while (j < 10)
{
for (i = 0; i <= 9; i++)
{
_putchar(i);
}
j++;
}
_putchar('\n');
}
