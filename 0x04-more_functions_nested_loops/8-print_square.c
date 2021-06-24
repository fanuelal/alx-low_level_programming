#include "holberton.h"

/**
 * print_square - print squares
 *@size: number of lines
 * Return: the result of the operation
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
