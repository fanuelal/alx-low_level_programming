#include "holberton.h"

/**
 * print_line - print lines
 *@n: number of lines
 * Return: the result of the operation
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{

_putchar('_');
}
}
_putchar('\n');
}
