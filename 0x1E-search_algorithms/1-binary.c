#include "search_algos.h"

/**
 *binary_search - search with binary algo
 *
 *@array: array of passed
 *@size: the size of array
 *@value: the values searched
 *Return: the index
 **/

int binary_search(int *array, size_t size, int value)
{
size_t i=0,l=size,m,j=i;

if (!value || array == 0)
  return (-1);
while(i < l)
{
m = (i+l)/2;
printf("Searching in array:");
for(j = i;j < l; j++)
{
printf(" %d", array[j]);
if (j < l - 1)
  printf(", ");   
}
printf("\n");
if(value < array[m])
{
l = m - 1;
}
else if (value > array[m])
{
i = m + 1;
}
else if (value == array[m])
{
return (m);
}
}
return (-1);
}

