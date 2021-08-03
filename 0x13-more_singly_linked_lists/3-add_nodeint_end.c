#include "lists.h"
/**
 * add_nodeint_end - that add on the linked list
 * @head: the pointer of pointer to listint_t
 * @n: the data of linked listt
 * Return: returns the address of new pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp = *head;
listint_t *new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->next)
temp = temp->next;
temp->next = new;
return (new);
}
