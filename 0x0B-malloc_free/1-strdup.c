#include <stdlib.h>
#include "holberton.h"
/**
 * *_strdup - creates an array of chars,
 * and initializes it with a specific char
 * @str: elements  of the array to create
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len;
i = 0;
len = 0;
if (str == NULL)
return (NULL);

while (str[len])
len++;
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);
while ((dup[i] = str[i]) != '\0')
i++;

return (dup);
}
