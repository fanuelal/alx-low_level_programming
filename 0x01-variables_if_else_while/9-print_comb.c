#include <stdio.h>
/**
 *main - prints all combination of basic numbers
 *separeted by comma
 *Return: Always 0 success
 **/
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
else
{
putchar('$');
}
}
putchar('\n');
return (0);
}
