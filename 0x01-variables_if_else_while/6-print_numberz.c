#include <stdio.h>
/**
 *main - prints the alphabet in lowercase
 *
 *Return: Always 0 success
 **/
int main(void)
{
int ch;
for (ch = 48; ch < 58; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
