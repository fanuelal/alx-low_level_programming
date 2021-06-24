#include "holberton.h"

/**
 * print_line - print lines
 *@n: number of lines
 * Return: the result of the operation
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i > 0)
{
_putchar('_');
}
else
{
break;
}
}
_putchar('\n');
}
