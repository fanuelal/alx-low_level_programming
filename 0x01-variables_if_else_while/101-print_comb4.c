#include <stdio.h>
/**
 *main - prints combination of basic digits
 *no repeatition
 *Return: Always 0 success
 **/
int main(void)
{
int i, j, z;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (z = 48; j < 58; z++)
{
if (i < j && j < z)
{
putchar(i);
putchar(j);
if (i != 55 || j != 56 || z != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
