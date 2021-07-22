#include <stdio.h>
#include "1-print_numbers.c"
/**
 *print_numbers - prints number
 *
 *@separator: the string
 *
 *@n: numbers of the integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsinged int i;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
{
if (!separator)
printf("%d", va_arg(list, int));
else if (separator && i == 0)
printf("%d", va_arg(list, int));
else
printf("%s%d", separator, va_arg(list, int));
}
va_end(list);
printf("\n");
}
