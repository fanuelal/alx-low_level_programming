#include <stdio.h>
/**
 *main - prints the alphabet in lowercase
 *
 *Return: Always 0 success
 **/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' && ch == 'q')
{
ch += 1;
continue;
}
else
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
