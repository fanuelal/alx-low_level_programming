#include <stdio.h>
/**
 *main - prints base 16 numbers
 *lower letter
 *Return: Always 0 success
 **/
int main(void)
{
int ch;
for (ch = 48; ch < 58; ch++)
{
putchar(ch);
}
for (ch = 97; ch <= 102; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
