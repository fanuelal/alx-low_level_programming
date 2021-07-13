#include <stdlib.h>
#include "holberton.h"

/**
 * **alloc_grid - concatenates two strings
 * @height: height of the grid plane
 * @width: width of the grid plane
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
int **arr;
int i, j;
if (height <= 0 || width <= 0)
return (NULL);
arr = (int **)malloc(sizeof(int *) * height);
if (arr == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
arr[i] = (int *) malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
free(arr);
for (j = 0; j <= 1; j++)
free(arr[j]);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
