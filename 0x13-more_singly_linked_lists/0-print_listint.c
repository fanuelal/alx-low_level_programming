#include "lists.h"
/**
 * print_listint - printing all elements
 * @h: the pointer to the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
num++;
}
return (num);
}
