#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int l;
if (n >= 0)
{
l = n % 10;
}
else
{
l = -(n % 10);
}
_putchar(l + '0');
return (l);
}
