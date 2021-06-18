#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - returns greater or less
 *according to the last digit of random number
 *
 *
 *Return: Always 0
 */
int main(void)
{
int n, L;
srand(time(0));
n = rand() - RAND_MAX / 2;
L = n % 10;
printf("Last digit of %d is %d and", n, L);
if (L > 5)
{
printf(" is greater than 5\n");
}
else if (L == 0)
{
printf(" is 0\n");
}
else if (L < 6 && L != 0)
{
printf(" is less than 6 and not 0\n");
}
return (0);
}
