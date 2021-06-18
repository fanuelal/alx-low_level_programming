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
printf("the last digit of %d is %d\n", n, L);
if (L > 5)
{
printf("%d is greater than 5", L);
}
else if (L == 0)
{
printf("%d is 0", L);
}
else if (L < 6 && L != 0)
{
printf("%d is less than 6 and not 0", L);
}
return (0);
}
