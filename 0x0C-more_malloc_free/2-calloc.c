#include <stdlib.h>
#include "holberton.h"
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *loc;
if (nmemb == 0 || size == 0)
  return (NULL);

loc = malloc(nmemb * size);
if (!loc)
return (NULL);
return (loc);
}
