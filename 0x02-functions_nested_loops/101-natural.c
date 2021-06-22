#include <stdio.h>
/**
 *main - print the sum of 1024
 *Return: 0 Always
 **/
int main(void)
{
int n, i;
for (i = 1024; i >= 0; i--)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
n += i;
}
}
printf("%d\n", n);
return (0);
}
