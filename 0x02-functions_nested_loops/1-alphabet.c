#include "holberton.h"
/**
 * main - print the lowercase letters
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char ch;
ch = 'a';
 while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
