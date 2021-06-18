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
for (j = 49; j < 58; j++)
{
for (z = 50; z < 58; z++)
{
if (z > j && j > i)
{
putchar(i);
putchar(j);
putchar(z);
if (i != 55 || j != 56)
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
