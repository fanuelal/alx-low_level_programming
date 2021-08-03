#include "lists.h"
/**
 * listint_len - the number of elements in linked
 * @h: pointer to the listint_t
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t n;
while (h)
{
n++;
h = h->next;
}
return (n);
}
